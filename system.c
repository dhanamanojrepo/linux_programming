#include <stdlib.h>
int main() {
  int ret_value;
  ret_value = system ("ls -l /");
  return ret_value;
}
