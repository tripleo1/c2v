// Test that sizeof with pointer dereferences doesn't generate unsafe blocks
// sizeof doesn't evaluate its operand, so no unsafe block is needed

#include <stdlib.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point *ptr;
    int size1 = sizeof(*ptr);

    int **ptr2;
    int size2 = sizeof(*ptr2);

    // Allocate using the computed size
    struct Point *p = malloc(size1);

    free(p);

    return 0;
}
