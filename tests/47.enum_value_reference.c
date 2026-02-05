// Test that enum values referencing other enum values are resolved to integers
// V requires enum values to be integer literals

enum eol_type {
  EOL_UNSET = -1,
  EOL_CRLF,
  EOL_LF,
  EOL_NATIVE = EOL_LF // This references EOL_LF
};

enum status {
  STATUS_MIN = 0,
  STATUS_OK = STATUS_MIN, // References STATUS_MIN
  STATUS_ERROR,
  STATUS_MAX = STATUS_ERROR // References STATUS_ERROR
};

int main() {
  enum eol_type e = EOL_NATIVE;
  enum status s = STATUS_OK;
  return 0;
}
