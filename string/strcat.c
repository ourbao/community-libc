#include "string.h"

char *strcat(char *restrict dest, const char *restrict src)
{
	for (size_t i = strlen(dest); (dest[i] = src[i]) != '\0'; ++i) ;
	return dest;
}
