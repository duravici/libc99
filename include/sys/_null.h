#undef NULL
#if __cplusplus >= 201103L
#define NULL nullptr
#elif defined(__cplusplus)
#define NULL 0L
#else /* ! __cplusplus */
#define NULL ((void*)0)
#endif /* __cplusplus */