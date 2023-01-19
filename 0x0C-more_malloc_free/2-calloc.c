#include <string.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory
 * @nmemb: number of that type
 * @size: size to be allocated
 * Return: ptr
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = calloc(nmemb, size);
	return (ptr);
}
