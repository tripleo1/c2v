enum color { RED, GREEN, BLUE };

struct has_enum_ptr {
    enum color *ptr;
    int value;
};

void use_enum_ptr(enum color *c) {
    *c = RED;
}
