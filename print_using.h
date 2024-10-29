#pragma once

#define PRINT_USING_VERSION 0x100

#ifdef __cplusplus
extern "C" {
#endif

int print_using(const char *format, ...);

#ifdef __cplusplus
} // extern "C"
#endif
