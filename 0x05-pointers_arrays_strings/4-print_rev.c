/*
 * File: 4-print_rev.c
 * Coder: Dagnachew A.
 */

#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	if (s == NULL)
		return;
	int l = 0, in;

	while (s[l] != '\0')
		l++;

	for (in = len - 1; in >= 0; in--)
		_putchar(s[in]);
}
