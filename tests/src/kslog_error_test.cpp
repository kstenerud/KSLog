#include <gtest/gtest.h>
#include "test_helpers.h"
#define KSLog_FileDesriptor g_kslog_fd
#define KSLog_LocalMinLevel KSLOG_LEVEL_ERROR
#include <kslog/kslog.h>

TEST(KSLog, error)
{
    unsigned char data[] = {0x3f, 0xd5};
    BEGIN_LOG_TEST();
    KSLOG_TRACE("Log level: ERROR");
    KSLOG_DEBUG("Log level: ERROR");
    KSLOG_INFO("Log level: ERROR");
    KSLOG_WARN("Log level: ERROR");
    KSLOG_ERROR("Log level: ERROR");
    KSLOGBASIC_TRACE("Log level: ERROR");
    KSLOGBASIC_DEBUG("Log level: ERROR");
    KSLOGBASIC_INFO("Log level: ERROR");
    KSLOGBASIC_WARN("Log level: ERROR");
    KSLOGBASIC_ERROR("Log level: ERROR");
    KSLOG_DATA_TRACE(data, sizeof(data), "Log level: ERROR: ");
    KSLOG_DATA_DEBUG(data, sizeof(data), "Log level: ERROR: ");
    KSLOG_DATA_INFO(data, sizeof(data), "Log level: ERROR: ");
    KSLOG_DATA_WARN(data, sizeof(data), "Log level: ERROR: ");
    KSLOG_DATA_ERROR(data, sizeof(data), "Log level: ERROR: ");
    KSLOGBASIC_DATA_TRACE(data, sizeof(data), "Log level: ERROR: ");
    KSLOGBASIC_DATA_DEBUG(data, sizeof(data), "Log level: ERROR: ");
    KSLOGBASIC_DATA_INFO(data, sizeof(data), "Log level: ERROR: ");
    KSLOGBASIC_DATA_WARN(data, sizeof(data), "Log level: ERROR: ");
    KSLOGBASIC_DATA_ERROR(data, sizeof(data), "Log level: ERROR: ");
    END_LOG_TEST("ERROR: kslog_error_test.cpp (15): virtual void KSLog_error_Test::TestBody(): Log level: ERROR\n"
                "Log level: ERROR\n"
                "ERROR: kslog_error_test.cpp (25): virtual void KSLog_error_Test::TestBody(): Log level: ERROR: [3f d5]\n"
                "Log level: ERROR: [3f d5]\n"
                );
}
