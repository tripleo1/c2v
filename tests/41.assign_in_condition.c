char *ep;

void test_negated_assign() {
  if (!(ep = "hello")) {
    return;
  }
}

void test_direct_assign() {
  if ((ep = "world")) {
    return;
  }
}
