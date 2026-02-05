// Test that dereferencing a function call on the left side of assignment
// generates a temporary variable

int* get_ptr() {
    static int x = 42;
    return &x;
}

int main() {
    // This should generate:
    // {
    //     tmp := get_ptr()
    //     unsafe { *tmp = 10 }
    // }
    *get_ptr() = 10;

    return 0;
}
