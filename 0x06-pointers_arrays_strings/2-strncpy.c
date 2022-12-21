#include <string.h>

/**
 * _strncpy - copies the value of a string
 *
 * @dest: the variable to be copied
 * @src: the source variable
 * @n: the third variable
 * Return: pointer to the result string
 */


char *_strncpy(char *dest, char *src, int n)
{
               size_t i;

               for (i = 0; i < n && src[i] != '\0'; i++)
                   dest[i] = src[i];
               for ( ; i < n; i++)
                   dest[i] = '\0';

               return dest;
}
