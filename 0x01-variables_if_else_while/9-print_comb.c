/*
 * File: 9-print_comb.c
 * Auth: Dagnachew Amare Menlargilih
 */

#include <stdio.h>

/**
* main - prints single digit numbers in order,comma and space gap
*
* Return: Always 0 (success)
*/
int main(void)
{
	int i;

	for (i = 1; i <= 9; i++)
	{
		putchar(i + '0');
		if (i == 9)
			continue;
	
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
