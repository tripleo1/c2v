#include <stdlib.h>

int compare_ints(const void *a, const void *b) {
  return (*(int *)a - *(int *)b);
}

void sane_qsort(void *base, size_t nmemb, size_t size,
                int (*compar)(const void *, const void *)) {
  if (nmemb > 1) {
    qsort(base, nmemb, size, compar);
  }
}

int main(void) {
  int arr[] = {3, 1, 4, 1, 5, 9, 2, 6};
  sane_qsort(arr, 8, sizeof(int), compare_ints);
  return 0;
}
