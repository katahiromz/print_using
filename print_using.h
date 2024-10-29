#pragma once

#define PRINT_USING_VERSION 103

#ifdef __cplusplus
extern "C" {
#endif

int print_using(const char *format, ...);
int vprint_using(const char *format, va_list va);

#ifdef __cplusplus
} // extern "C"
#endif
