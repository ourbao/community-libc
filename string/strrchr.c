#include "string.h"

char *strrchr(const char *s, int c)
{
	char *p = NULL;
	for (size_t i = 0; s[i] != '\0'; ++i) {
		if (s[i] == c) {
			p = (char *)&s[i];
		}
	}
	return p;
}
