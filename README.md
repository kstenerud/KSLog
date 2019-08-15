KSLog
=====

A simple, header-only, async-safe logger for C and C++.



Purpose
-------

KSLog fills the spot for:

* Quick and easy logging.
* Async-safety.
* Tricky conditions where more full-featured loggers are too heavy or the environment won't support them.



Features
--------

* Implemented as a single header
* Five log levels (trace, debug, info, warn. error)
* Per-file log levels
* Write to stdout, stderr, or file
* Optional user-supplied custom log implementation
* Log calls with log levels below the minimum compile to nothing

The default implementation:

* Is async-safe
* Makes no memory allocations
* Only calls the following functions:
  - `strlen()`
  - `write()`
  - `vsnprintf()`
  - `strrchr()`
  - `va_start()`
  - `va_end()`



Requirements
------------

  * Meson 0.49 or newer
  * Ninja 1.8.2 or newer
  * A C compiler
  * A C++ compiler (for the unit tests)



Dependencies
------------

 * stdarg.h
 * stdio.h
 * string.h
 * unistd.h



Building
--------

    meson build
    ninja -C build

(or just copy `kslog.h` into your project)


Running Tests
-------------

    ninja -C build test

For the full report:

    ./build/run_tests



Installing
----------

    ninja -C build install



Usage
-----

```c
// Defining KSLog_LocalMinLevel as a demonstration. You can define the global
// level KSLog_MinLevel as a compiler define. It defaults to KSLOG_LEVEL_INFO.
#define KSLog_LocalMinLevel KSLOG_LEVEL_DEBUG
#include <kslog/kslog.h>

void demonstrate_kslog()
{
    unsigned char data[] = {0x01, 0x5f, 0x88};
    KSLOG_DEBUG("A debug message");
    KSLOG_WARN("A warning message");
    KSLOG_DATA_INFO(data, sizeof(data), "Some data");
    KSLOGBASIC_INFO("A basic log message");
    KSLOGBASIC_DATA_INFO(data, sizeof(data), "Some data (basic log)");
}
```

Output:
```
DEBUG: readme_examples_test.cpp (12): void demonstrate_kslog(): A debug message
WARN: readme_examples_test.cpp (13): void demonstrate_kslog(): A warning message
INFO: readme_examples_test.cpp (14): void demonstrate_kslog(): Some data[01 5f 88]
A basic log message
Some data (basic log)[01 5f 88]
```
