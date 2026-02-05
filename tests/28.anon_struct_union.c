// Test for anonymous structs and unions inside structs
// NOTE: V doesn't support anonymous inline struct/union types,
// but this test documents that C2V expands them instead of
// outputting broken "Union (unnamed union at ...)" strings.

struct with_anon_union {
  int type;
  union {
    int i;
    float f;
  } value;
};

struct with_anon_struct {
  int id;
  struct {
    int x;
    int y;
  } point;
};

struct nested_anon {
  union {
    struct {
      int left;
      int right;
    } binary;
    int unary;
  } u;
};
