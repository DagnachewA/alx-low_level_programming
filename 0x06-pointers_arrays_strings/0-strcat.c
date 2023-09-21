/*
 * File: 0-strcat.c
 * Coder: Dagnachew Amare
 */

#include "main.h"
#include <stddef>

/**
 * _strcat - Concatenates the string pointed to by @src, including the terminating
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 ** Description:
 *   This function appends the string pointed to by @src to the end of the string
 *   pointed to by @dest. It overwrites the null byte ('\0') at the end of @dest
 *   and then adds a terminating null byte at the end of the concatenated string.
 *   The resulting concatenated string is stored in the memory location pointed
 *   to by @dest. It is assumed that @dest has enough space to accommodate the
 *   additional characters from @src.
 *
 * Return:
 *   Returns a pointer to the destination string @dest.
 */
char *_strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
