#undef NULL
#ifdef __cplusplus
#ifdef __GNUC__
#define NULL __null
#elif __cplusplus >= 201103L
#define NULL nullptr
#else
#define NULL 0L
#endif /* __GNUC__ */
#else /* ! __cplusplus */
#define NULL ((void*)0)
#endif /* __cplusplus */
