#include "main.h"

/*
 * memset - is used to fill the first n bytes of the memory pointed at by @s
 * with a constant byte @c
 * return - a pointer used to fill the memory area @s
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index:
	unsigned char *memory = s, value = c:

	for (index = 0; index < n; index++)
		memory[index] = value;
	return(memory);
}


