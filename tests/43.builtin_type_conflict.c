// Test that struct names conflicting with V built-in types are renamed
// V has built-in Option, Result, and Error types

struct option {
    int value;
    char *name;
};

struct result {
    int code;
    char *message;
};

struct error {
    int errnum;
    char *desc;
};

void use_option(struct option *opt) {
    opt->value = 42;
}

int main() {
    struct option opt;
    opt.value = 1;
    opt.name = "test";
    use_option(&opt);
    return 0;
}
