#include <sys/types.h>
#include <time.h>

off_t get_offset(off_t pos) { return pos + 1024; }

uid_t get_uid(void) { return 1000; }

pid_t get_pid(void) { return 12345; }

time_t get_time(time_t t) { return t + 3600; }

mode_t get_mode(void) { return 0755; }

dev_t get_device(void) { return 12345678; }

int main(void) {
  off_t offset = get_offset(0);
  uid_t uid = get_uid();
  pid_t pid = get_pid();
  time_t t = get_time(0);
  mode_t mode = get_mode();
  dev_t dev = get_device();
  return 0;
}
