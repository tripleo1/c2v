// Test that nested unsafe blocks are avoided
// When a pointer dereference is inside an assignment to a dereferenced pointer,
// we should not generate nested unsafe blocks

int main() {
    int x = 10;
    int y = 20;
    int *px = &x;
    int *py = &y;

    // This generates: unsafe { *px = *py }
    // The inner *py should not have its own unsafe block
    *px = *py;

    // More complex case with ternary
    int *result = &x;
    int cond = 1;
    *result = cond ? *px : *py;

    return 0;
}
