// Test that external types (from headers) are properly handled
// These types are used but not defined in this translation unit

// Forward declare external struct (definition in header)
struct external_item;

struct my_container {
  struct external_item *item;
  int count;
};

void process_item(struct external_item *item) {}

int main() {
  struct my_container c;
  c.count = 0;
  return 0;
}
