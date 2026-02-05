// Test pointer dereference operations
#include <stdlib.h>

void test_ptr_ops(char **endptr, int *value) {
  // Reading from dereferenced pointer
  if (*endptr != NULL) {
    // Assigning to dereferenced pointer
    *value = 42;
  }

  int abc = 123;
  int *pabc = &abc;
  *value = *pabc;

  // check `*x = *y = value;`
  int count = 10;
  int *dc_colormap = &count;
  int *dc_source = &count;
  int frac = 5;
  int fracstep = 2;
  int FRACBITS = 2;
  int *dest;
  int *dest2;
  do {
     *dest2 = *dest = dc_colormap[dc_source[(frac >> FRACBITS) & 127]];
     dest += 320;
     dest2 += 320;
     frac += fracstep;
  } while (count--);

}
