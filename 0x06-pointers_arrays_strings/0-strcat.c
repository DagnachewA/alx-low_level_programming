/*
 * File: 0-strcat.c
 * Coder: Dagnachew Amare
 */

#include "main.h"
#include <stddef.h>
/**
 * strcat - Concatenates the string pointed to by @src, including the terminating
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;
	
	if (dest == NULL || src == NULL)
	return NULL;

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
	return dest_ptr;
}
