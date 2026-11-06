#ifndef _STDDEF_H_
#define _STDDEF_H_

#include <sys/_null.h>

#define __REQUIRE_ptrdiff_t
#define __REQUIRE_size_t
#define __REQUIRE_wchar_t

#if __cplusplus >= 201103L
/* NOTE: exposed to C++11 builds only, C99 doesn't have a max_align_t type */
#define __REQUIRE_max_align_t
#endif /* __cplusplus >= 201103L */

#include <sys/_types.h>

#if __GNUC__ > 3
#define offsetof(type, member) __builtin_offsetof(type, member)
#else
#define offsetof(type, member) ((size_t)((char*)&((type*)0)->member - (char*)0))
#endif /* __GNUC__ > 3 */

#endif /* ! _STDDEF_H_ */