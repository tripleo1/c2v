typedef int (*fn_with_void_pp)(void *a, void **b);

void test_fn(void **ptr) {
    *ptr = 0;
}
