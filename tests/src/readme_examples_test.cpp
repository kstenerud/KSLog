#include <gtest/gtest.h>


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

    // Output:
    //   DEBUG: readme_examples_test.cpp (12): void demonstrate_kslog(): A debug message
    //   WARN: readme_examples_test.cpp (13): void demonstrate_kslog(): A warning message
    //   INFO: readme_examples_test.cpp (14): void demonstrate_kslog(): Some data[01 5f 88]
    //   A basic log message
    //   Some data (basic log)[01 5f 88]
}

TEST(KSLog, readme_examples)
{
    demonstrate_kslog();
}
