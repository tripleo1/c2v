/**
 * This is a doc comment that should not cause
 * the extern declaration to be treated as initialized.
 */
extern const char *extern_array[];

struct Foo {
    int x;
};

void use_foo(struct Foo *f) {
    f->x = 1;
}
