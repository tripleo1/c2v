// Test struct pointer type conversion
// Types like 'struct foo_struct *' should convert to '&Foo_struct'
// Bug: 'struct ' was being replaced globally, so 'diff_queue_struct *' became 'diff_queue_*'

struct my_queue_struct {
    int value;
};

// Function with struct pointer parameter - tests the type conversion
void process_queue(struct my_queue_struct *queue) {
    queue->value = 42;
}

// Function pointer typedef with struct pointer argument
typedef void (*queue_fn_t)(struct my_queue_struct *, int);

void use_callback(queue_fn_t callback) {
    struct my_queue_struct q;
    callback(&q, 1);
}
