/*
 * File: 100-print_comb3.c
 * Auth: Dagnachew Amare Menlargilih
 */

#include <stdio.h>

/**
 * main - prints a mix of single digit numbers in order, comma, and space gap
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 <= 8; n1++)
	{
	for (n2 = n1 + 1; n2 <= 9; n2++)
	{
	putchar(n1 + '0');
	putchar(n2 + '0');

	if (n1 == 8 && n2 == 9)
		continue;

	putchar(',');
	putchar(' ');
	}
	}

	putchar('\n');
	return (0);
}
