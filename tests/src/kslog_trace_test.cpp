#include <gtest/gtest.h>
#include "test_helpers.h"
#define KSLog_FileDesriptor g_kslog_fd
#define KSLog_LocalMinLevel KSLOG_LEVEL_TRACE
#include <kslog/kslog.h>

TEST(KSLog, trace)
{
    unsigned char data[] = {0x3f, 0xd5};
    BEGIN_LOG_TEST();
    KSLOG_TRACE("Log level: TRACE");
    KSLOG_DEBUG("Log level: TRACE");
    KSLOG_INFO("Log level: TRACE");
    KSLOG_WARN("Log level: TRACE");
    KSLOG_ERROR("Log level: TRACE");
    KSLOGBASIC_TRACE("Log level: TRACE");
    KSLOGBASIC_DEBUG("Log level: TRACE");
    KSLOGBASIC_INFO("Log level: TRACE");
    KSLOGBASIC_WARN("Log level: TRACE");
    KSLOGBASIC_ERROR("Log level: TRACE");
    KSLOG_DATA_TRACE(data, sizeof(data), "Log level: TRACE: ");
    KSLOG_DATA_DEBUG(data, sizeof(data), "Log level: TRACE: ");
    KSLOG_DATA_INFO(data, sizeof(data), "Log level: TRACE: ");
    KSLOG_DATA_WARN(data, sizeof(data), "Log level: TRACE: ");
    KSLOG_DATA_ERROR(data, sizeof(data), "Log level: TRACE: ");
    KSLOGBASIC_DATA_TRACE(data, sizeof(data), "Log level: TRACE: ");
    KSLOGBASIC_DATA_DEBUG(data, sizeof(data), "Log level: TRACE: ");
    KSLOGBASIC_DATA_INFO(data, sizeof(data), "Log level: TRACE: ");
    KSLOGBASIC_DATA_WARN(data, sizeof(data), "Log level: TRACE: ");
    KSLOGBASIC_DATA_ERROR(data, sizeof(data), "Log level: TRACE: ");
    END_LOG_TEST("TRACE: kslog_trace_test.cpp (11): virtual void KSLog_trace_Test::TestBody(): Log level: TRACE\n"
                "DEBUG: kslog_trace_test.cpp (12): virtual void KSLog_trace_Test::TestBody(): Log level: TRACE\n"
                "INFO: kslog_trace_test.cpp (13): virtual void KSLog_trace_Test::TestBody(): Log level: TRACE\n"
                "WARN: kslog_trace_test.cpp (14): virtual void KSLog_trace_Test::TestBody(): Log level: TRACE\n"
                "ERROR: kslog_trace_test.cpp (15): virtual void KSLog_trace_Test::TestBody(): Log level: TRACE\n"
                "Log level: TRACE\n"
                "Log level: TRACE\n"
                "Log level: TRACE\n"
                "Log level: TRACE\n"
                "Log level: TRACE\n"
                "TRACE: kslog_trace_test.cpp (21): virtual void KSLog_trace_Test::TestBody(): Log level: TRACE: [3f d5]\n"
                "DEBUG: kslog_trace_test.cpp (22): virtual void KSLog_trace_Test::TestBody(): Log level: TRACE: [3f d5]\n"
                "INFO: kslog_trace_test.cpp (23): virtual void KSLog_trace_Test::TestBody(): Log level: TRACE: [3f d5]\n"
                "WARN: kslog_trace_test.cpp (24): virtual void KSLog_trace_Test::TestBody(): Log level: TRACE: [3f d5]\n"
                "ERROR: kslog_trace_test.cpp (25): virtual void KSLog_trace_Test::TestBody(): Log level: TRACE: [3f d5]\n"
                "Log level: TRACE: [3f d5]\n"
                "Log level: TRACE: [3f d5]\n"
                "Log level: TRACE: [3f d5]\n"
                "Log level: TRACE: [3f d5]\n"
                "Log level: TRACE: [3f d5]\n"
                );
}
