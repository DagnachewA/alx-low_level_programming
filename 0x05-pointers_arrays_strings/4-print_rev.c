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
	if (s == NULL)
		return;
	int length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	int i;
	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	_putchar('\n');
}
