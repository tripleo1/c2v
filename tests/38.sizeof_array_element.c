int get_array_size(void) {
  int arr[10];
  return sizeof(arr) / sizeof((arr)[0]);
}
