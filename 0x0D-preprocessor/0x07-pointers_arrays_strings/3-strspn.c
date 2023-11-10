/*
 * File Name: 3-strspn.c
 * Coder: Dagnachew Amare
 */

#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @pref: The prefix to be measured.
 *
 * Return: The number of bytes in s which
 *         consist only of bytes from pref.
 */
unsigned int _strspn(char *s, char *pref)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; pref[index]; index++)
		{
			if (*s == pref[index])
			{
				bytes++;
				break;
			}

			else if (pref[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
