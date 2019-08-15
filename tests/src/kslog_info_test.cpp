#include <gtest/gtest.h>
#include "test_helpers.h"
#define KSLog_FileDesriptor g_kslog_fd
#define KSLog_LocalMinLevel KSLOG_LEVEL_INFO
#include <kslog/kslog.h>

TEST(KSLog, info)
{
    unsigned char data[] = {0x3f, 0xd5};
    BEGIN_LOG_TEST();
    KSLOG_TRACE("Log level: INFO");
    KSLOG_DEBUG("Log level: INFO");
    KSLOG_INFO("Log level: INFO");
    KSLOG_WARN("Log level: INFO");
    KSLOG_ERROR("Log level: INFO");
    KSLOGBASIC_TRACE("Log level: INFO");
    KSLOGBASIC_DEBUG("Log level: INFO");
    KSLOGBASIC_INFO("Log level: INFO");
    KSLOGBASIC_WARN("Log level: INFO");
    KSLOGBASIC_ERROR("Log level: INFO");
    KSLOG_DATA_TRACE(data, sizeof(data), "Log level: INFO: ");
    KSLOG_DATA_DEBUG(data, sizeof(data), "Log level: INFO: ");
    KSLOG_DATA_INFO(data, sizeof(data), "Log level: INFO: ");
    KSLOG_DATA_WARN(data, sizeof(data), "Log level: INFO: ");
    KSLOG_DATA_ERROR(data, sizeof(data), "Log level: INFO: ");
    KSLOGBASIC_DATA_TRACE(data, sizeof(data), "Log level: INFO: ");
    KSLOGBASIC_DATA_DEBUG(data, sizeof(data), "Log level: INFO: ");
    KSLOGBASIC_DATA_INFO(data, sizeof(data), "Log level: INFO: ");
    KSLOGBASIC_DATA_WARN(data, sizeof(data), "Log level: INFO: ");
    KSLOGBASIC_DATA_ERROR(data, sizeof(data), "Log level: INFO: ");
    END_LOG_TEST("INFO: kslog_info_test.cpp (13): virtual void KSLog_info_Test::TestBody(): Log level: INFO\n"
                "WARN: kslog_info_test.cpp (14): virtual void KSLog_info_Test::TestBody(): Log level: INFO\n"
                "ERROR: kslog_info_test.cpp (15): virtual void KSLog_info_Test::TestBody(): Log level: INFO\n"
                "Log level: INFO\n"
                "Log level: INFO\n"
                "Log level: INFO\n"
                "INFO: kslog_info_test.cpp (23): virtual void KSLog_info_Test::TestBody(): Log level: INFO: [3f d5]\n"
                "WARN: kslog_info_test.cpp (24): virtual void KSLog_info_Test::TestBody(): Log level: INFO: [3f d5]\n"
                "ERROR: kslog_info_test.cpp (25): virtual void KSLog_info_Test::TestBody(): Log level: INFO: [3f d5]\n"
                "Log level: INFO: [3f d5]\n"
                "Log level: INFO: [3f d5]\n"
                "Log level: INFO: [3f d5]\n"
                );
}
