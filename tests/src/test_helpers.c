//__FILE__

#include "test_helpers.h"

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME_TEMPLATE "test_log_XXXXXX"

bool open_log(loghelper* log)
{
    strcpy(log->filename, FILENAME_TEMPLATE);
    mkstemp(log->filename);
    log->fd = open(log->filename, O_WRONLY);
    return log->fd > 0;
}

void close_log(loghelper* log)
{
    close(log->fd);
}

bool read_log(loghelper* log)
{
    FILE* fp = fopen(log->filename, "rt");
    if(fp == NULL)
    {
        return false;
    }
    fseek(fp, 0L, SEEK_END);
    log->contents_length = ftell(fp);    
    fseek(fp, 0L, SEEK_SET);
    log->contents = calloc(log->contents_length + 1, 1);
    int bytes_read = fread(log->contents, 1, log->contents_length, fp);
    fclose(fp);
    if(bytes_read != log->contents_length)
    {
        return false;
    }
    return true;
}