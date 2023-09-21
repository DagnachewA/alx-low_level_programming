/*
 * File: 0-strcat.c
 * Coder: Dagnachew Amare
 */

#include "main.h"

/**
 * _strcat - Concatenates the string pointed to by @src, including the
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 ** Description:
 * This function appends the string @*src to end of the string
 * @*dest. It overwrites the null byte ('\0') at the end of @dest
 * and then adds null byte at the end of the concatenated string.
 * The concatenated string is stored in the memory location pointed
 * @*dest. It is assumed that @dest has enough space to accommodate
 * additional characters from @src.
 *
 * Return:
 *   Returns a pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
