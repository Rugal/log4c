# log4c
This is a simple logger for C language.

## Usage

### Include
Place `log4c.h` file in your header path and add it to the source file that requires logger.

```c
#include "log4c.h"
```

### Base log level
At the top of your main file, please declare a global variable named `log4c_level`.  
By doing this, any log that is lower than this level will be ignored.  

```c
int log4c_level = LOG4C_ALL;
```

#### All available log levels

1. LOG4C_ALL
2. LOG4C_TRACE
3. LOG4C_DEBUG
4. LOG4C_INFO
5. LOG4C_WARNING
6. LOG4C_ERROR
7. LOG4C_OFF

### Logging

Now you can do logging in either way of following:  

```c
LOG(LOG4C_ERROR, "This is example");
LOG_ERROR("This is example");
```

## Example

The [main.c](src/main.c) and [test.c](src/implement/test.c) in this repository are good example.  

