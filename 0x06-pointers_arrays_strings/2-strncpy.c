#include "main.h"
#include <string.h>

/**
 * _strncpy -> foir copying purpose
 * @dest: param
 * @src: param2
 * @n: param3
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
