typedef void cleanup_fn(void *data);
typedef int single_arg_fn(int x);

void use_cleanup(cleanup_fn *fn, void *data) {
    fn(data);
}
