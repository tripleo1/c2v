void test() {
  int i, j, k;
  for (i = 0, j = 0; i < 5; i++) {
    j++;
  }
  for (i = 0, j = 123; i < 10; i++, j++) {
    j++;
  }
  for (i = 0, j = 5, k = 11; i < 7; i++, j++, k--) {
    j += 5;
  }
}
