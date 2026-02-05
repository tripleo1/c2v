void use_const_ptr(const char *const str) {
  // str points to const data and is itself const
}

void use_const_ptr2(char *const ptr) {
  // ptr is const but the data it points to is not
}
