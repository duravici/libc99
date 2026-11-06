#undef NULL
#ifdef __cplusplus
#if __GNUC__ > 3
#define NULL __null
#else
#define NULL 0L
#endif /* __GNUC__ > 3 */
#else /* ! __cplusplus */
#define NULL ((void*)0)
#endif /* __cplusplus */