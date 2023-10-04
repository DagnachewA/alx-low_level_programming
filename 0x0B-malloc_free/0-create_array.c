#include "main.h"
#include <stdlib.h>
/**
 * create_array - return array of char.
 * @c: char to fill arr.
 * @size: arr size
 * Return: str of char.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int b;
	char *ptr;
	unsigned int b;

	ptr = malloc(size * sizeof(char));
	if (size == 0 || !ptr)
		return ('\0');
	for (b = 0; b < size; b++)
		ptr[b] = c;
	return (ptr);
}
