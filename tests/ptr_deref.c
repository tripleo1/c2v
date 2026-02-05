// Test pointer dereference operations
#include <stdlib.h>

void test_ptr_ops(char **endptr, int *value) {
    // Reading from dereferenced pointer
    if (*endptr != NULL) {
        // Assigning to dereferenced pointer
        *value = 42;
    }
}
