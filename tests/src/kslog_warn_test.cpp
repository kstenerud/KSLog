#include <gtest/gtest.h>
#include "test_helpers.h"
#define KSLog_FileDesriptor g_kslog_fd
#define KSLog_LocalMinLevel KSLOG_LEVEL_WARN
#include <kslog/kslog.h>

TEST(KSLog, warn)
{
    unsigned char data[] = {0x3f, 0xd5};
    BEGIN_LOG_TEST();
    KSLOG_TRACE("Log level: WARN");
    KSLOG_DEBUG("Log level: WARN");
    KSLOG_INFO("Log level: WARN");
    KSLOG_WARN("Log level: WARN");
    KSLOG_ERROR("Log level: WARN");
    KSLOGBASIC_TRACE("Log level: WARN");
    KSLOGBASIC_DEBUG("Log level: WARN");
    KSLOGBASIC_INFO("Log level: WARN");
    KSLOGBASIC_WARN("Log level: WARN");
    KSLOGBASIC_ERROR("Log level: WARN");
    KSLOG_DATA_TRACE(data, sizeof(data), "Log level: WARN: ");
    KSLOG_DATA_DEBUG(data, sizeof(data), "Log level: WARN: ");
    KSLOG_DATA_INFO(data, sizeof(data), "Log level: WARN: ");
    KSLOG_DATA_WARN(data, sizeof(data), "Log level: WARN: ");
    KSLOG_DATA_ERROR(data, sizeof(data), "Log level: WARN: ");
    KSLOGBASIC_DATA_TRACE(data, sizeof(data), "Log level: WARN: ");
    KSLOGBASIC_DATA_DEBUG(data, sizeof(data), "Log level: WARN: ");
    KSLOGBASIC_DATA_INFO(data, sizeof(data), "Log level: WARN: ");
    KSLOGBASIC_DATA_WARN(data, sizeof(data), "Log level: WARN: ");
    KSLOGBASIC_DATA_ERROR(data, sizeof(data), "Log level: WARN: ");
    END_LOG_TEST("WARN: kslog_warn_test.cpp (14): virtual void KSLog_warn_Test::TestBody(): Log level: WARN\n"
                "ERROR: kslog_warn_test.cpp (15): virtual void KSLog_warn_Test::TestBody(): Log level: WARN\n"
                "Log level: WARN\n"
                "Log level: WARN\n"
                "WARN: kslog_warn_test.cpp (24): virtual void KSLog_warn_Test::TestBody(): Log level: WARN: [3f d5]\n"
                "ERROR: kslog_warn_test.cpp (25): virtual void KSLog_warn_Test::TestBody(): Log level: WARN: [3f d5]\n"
                "Log level: WARN: [3f d5]\n"
                "Log level: WARN: [3f d5]\n"
                );
}
