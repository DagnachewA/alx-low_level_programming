/*
 * File: 0-strcat.c
 * Coder: Dagnachew Amare
 */

#include "main.h"
#include <stddef>

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Description: This function appends the source string to the destination
 * string, overwriting the terminating null byte ('\0') at the end of dest,
 * and then adds a terminating null byte. The resulting concatenated string
 * is stored in the destination string @dest. It assumes that @dest has enough
 * space to accommodate the additional characters from @src.
 *
 * Return: Pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)/* _strcat */
{
	char *dest_ptr = dest;

	if (dest == NULL || src == NULL)
	return (NULL);

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_ptr);
}
