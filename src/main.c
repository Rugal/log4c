#include "log4c.h"
#include "test.h"

//Set overall log level
int log4c_level = LOG4C_ALL;

int main() {
  LOG(LOG4C_ERROR, "Move file position to");
  test();
  LOG(LOG4C_DEBUG, "You can also add placeholder like this [%d]", 3);
  return 0;
}
