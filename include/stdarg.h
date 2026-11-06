#ifndef _STDARG_H_
#define _STDARG_H_

#define __REQUIRE_va_list
#include <sys/_types.h>

#define va_start(ap, last) __builtin_va_start(ap, last)
#define va_arg(ap, type)   __builtin_va_arg(ap, type)
#define va_end(ap)         __builtin_va_end(ap)
#define va_copy(dest, src) __builtin_va_copy(dest, src)

#endif /* ! _STDARG_H_ */