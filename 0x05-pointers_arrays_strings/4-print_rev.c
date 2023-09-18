/*
 * File Name: 4-print_rev.c
 * Coder: Dagnachew A.
 */

#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int i, length = 0;

	if (s == NULL)
		return;

	while (s[length] != '\0')
		length++;

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
