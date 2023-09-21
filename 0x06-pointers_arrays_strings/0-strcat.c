/*
 * File: 0-strcat.c
 * Coder: Dagnachew Amare
 */

#include "main.h"

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
    if (dest == NULL || src == NULL)
        return NULL;

    char *dest_ptr = dest;

    // Find the end of the destination string
    while (*dest != '\0')
    {
        dest++;
    }

    // Append the source string to the destination string
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0'; // Add a terminating null byte

    return dest_ptr;
}
