#include <gtest/gtest.h>
#include "test_helpers.h"
#define KSLog_FileDesriptor g_kslog_fd
#define KSLog_LocalMinLevel KSLOG_LEVEL_DEBUG
#include <kslog/kslog.h>

TEST(KSLog, debug)
{
    unsigned char data[] = {0x3f, 0xd5};
    BEGIN_LOG_TEST();
    KSLOG_TRACE("Log level: DEBUG");
    KSLOG_DEBUG("Log level: DEBUG");
    KSLOG_INFO("Log level: DEBUG");
    KSLOG_WARN("Log level: DEBUG");
    KSLOG_ERROR("Log level: DEBUG");
    KSLOGBASIC_TRACE("Log level: DEBUG");
    KSLOGBASIC_DEBUG("Log level: DEBUG");
    KSLOGBASIC_INFO("Log level: DEBUG");
    KSLOGBASIC_WARN("Log level: DEBUG");
    KSLOGBASIC_ERROR("Log level: DEBUG");
    KSLOG_DATA_TRACE(data, sizeof(data), "Log level: DEBUG: ");
    KSLOG_DATA_DEBUG(data, sizeof(data), "Log level: DEBUG: ");
    KSLOG_DATA_INFO(data, sizeof(data), "Log level: DEBUG: ");
    KSLOG_DATA_WARN(data, sizeof(data), "Log level: DEBUG: ");
    KSLOG_DATA_ERROR(data, sizeof(data), "Log level: DEBUG: ");
    KSLOGBASIC_DATA_TRACE(data, sizeof(data), "Log level: DEBUG: ");
    KSLOGBASIC_DATA_DEBUG(data, sizeof(data), "Log level: DEBUG: ");
    KSLOGBASIC_DATA_INFO(data, sizeof(data), "Log level: DEBUG: ");
    KSLOGBASIC_DATA_WARN(data, sizeof(data), "Log level: DEBUG: ");
    KSLOGBASIC_DATA_ERROR(data, sizeof(data), "Log level: DEBUG: ");
    END_LOG_TEST("DEBUG: kslog_debug_test.cpp (12): virtual void KSLog_debug_Test::TestBody(): Log level: DEBUG\n"
                "INFO: kslog_debug_test.cpp (13): virtual void KSLog_debug_Test::TestBody(): Log level: DEBUG\n"
                "WARN: kslog_debug_test.cpp (14): virtual void KSLog_debug_Test::TestBody(): Log level: DEBUG\n"
                "ERROR: kslog_debug_test.cpp (15): virtual void KSLog_debug_Test::TestBody(): Log level: DEBUG\n"
                "Log level: DEBUG\n"
                "Log level: DEBUG\n"
                "Log level: DEBUG\n"
                "Log level: DEBUG\n"
                "DEBUG: kslog_debug_test.cpp (22): virtual void KSLog_debug_Test::TestBody(): Log level: DEBUG: [3f d5]\n"
                "INFO: kslog_debug_test.cpp (23): virtual void KSLog_debug_Test::TestBody(): Log level: DEBUG: [3f d5]\n"
                "WARN: kslog_debug_test.cpp (24): virtual void KSLog_debug_Test::TestBody(): Log level: DEBUG: [3f d5]\n"
                "ERROR: kslog_debug_test.cpp (25): virtual void KSLog_debug_Test::TestBody(): Log level: DEBUG: [3f d5]\n"
                "Log level: DEBUG: [3f d5]\n"
                "Log level: DEBUG: [3f d5]\n"
                "Log level: DEBUG: [3f d5]\n"
                "Log level: DEBUG: [3f d5]\n"
                );
}
