// print_using.h - N88-BASIC PRINT USING emulation in C++11
// License: MIT
/////////////////////////////////////////////////////////////////////////////

#pragma once

#define PRINT_USING_VERSION 105

#ifdef __cplusplus
extern "C" {
#endif

int print_using(const char *format, ...);
int vprint_using(const char *format, va_list va);

#ifdef __cplusplus
} // extern "C"
#endif
