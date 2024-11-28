// print_using.h - N88-BASIC PRINT USING emulation in C++11
// License: MIT
/////////////////////////////////////////////////////////////////////////////

#pragma once

#define PRINT_USING_VERSION 112

#ifdef __cplusplus
extern "C" {
#endif

int print_using(const char *format, ...);
int vprint_using(const char *format, va_list va);
void sprint_using(char *buffer, size_t buffer_size, const char *format, ...);
void vsprint_using(char *buffer, size_t buffer_size, const char *format, va_list va);

#ifdef __cplusplus
} // extern "C"
#endif
