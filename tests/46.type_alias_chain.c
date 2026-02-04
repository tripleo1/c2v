// Test that type alias chains are resolved
// V doesn't allow type A = B where B is also an alias

typedef unsigned int uint32;
typedef uint32 myint;
typedef myint deepint;

void use_types(uint32 a, myint b, deepint c) {
}

int main() {
    uint32 x = 1;
    myint y = 2;
    deepint z = 3;
    use_types(x, y, z);
    return 0;
}
