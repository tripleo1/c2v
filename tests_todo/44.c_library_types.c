// Test that C library types are properly translated
// NOTE: this currently produces ONLY on linux:
// ```
// // External C type declarations (from headers)
// struct C.Va_list {}
// ```
// which makes the test output unstable across macos/linux
#include <pthread.h>
#include <stdarg.h>
#include <stdint.h>

typedef void (*report_fn)(const char *msg, va_list args);

void log_message(const char *fmt, va_list args) {}

uintmax_t get_max_value(void) { return 0; }

intmax_t get_signed_max(void) { return 0; }

pthread_mutex_t global_mutex;

void use_mutex(pthread_mutex_t *mutex) {}

int main() {
  uintmax_t u = get_max_value();
  intmax_t i = get_signed_max();
  use_mutex(&global_mutex);
  return 0;
}
