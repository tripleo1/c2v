// Test that casting 0 to a pointer type generates voidptr(0)
// This avoids "cannot dereference nil pointer" errors in V

int main() {
    // C idiom: (type*)0 or (type*)NULL
    int *ptr1 = (int*)0;
    char *ptr2 = (char*)0;
    void *ptr3 = (void*)0;

    return 0;
}
