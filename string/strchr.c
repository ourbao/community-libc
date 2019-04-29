#include "string.h"

char *strchr(const char *s, int c)
{
	size_t i;
	for (i = 0; s[i] != '\0' && s[i] != c; ++i) ;
	return (char *)((s[i] == c) ? &s[i] : NULL);
}
