#include "string.h"

char *strcpy(char *restrict dest, const char *restrict src)
{
	size_t i;
	for (i = 0; (dest[i] = src[i]) != '\0'; ++i) ;
	return dest;
}
