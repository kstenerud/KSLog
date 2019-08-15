
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stdio.h>

static int g_kslog_fd;

typedef struct
{
    char filename[16];
    int fd;
    char* contents;
    int contents_length;
} loghelper;

bool open_log(loghelper* log);

void close_log(loghelper* log);

bool read_log(loghelper* log);

#define BEGIN_LOG_TEST() \
    loghelper log; \
    ASSERT_TRUE(open_log(&log)); \
    g_kslog_fd = log.fd

#define END_LOG_TEST(EXPECTED_LOG) \
    close_log(&log); \
    read_log(&log); \
    ASSERT_STREQ(EXPECTED_LOG, log.contents)

#ifdef __cplusplus
}
#endif
