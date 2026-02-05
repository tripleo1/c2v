#include <assert.h>

int test_builtin_expect(int x) {
    if (__builtin_expect(x > 0, 1)) {
        return 1;
    }
    return 0;
}

void test_assert(int x) {
    assert(x > 0);
}

int main(void) {
    int result = test_builtin_expect(5);
    test_assert(result);
    return 0;
}
