// Test that ternary operators are translated with proper spacing
// The condition and opening brace should have a space between them

int max(int a, int b) {
    return a > b ? a : b;
}

int clamp(int val, int min, int max) {
    return val < min ? min : (val > max ? max : val);
}

int get_size(int n) {
    // This pattern is common in hash tables
    return n < 16 ? 1 : n >> 4;
}

int main() {
    int x = max(10, 20);
    int y = clamp(15, 0, 100);
    int z = get_size(32);
    return 0;
}
