/*
 * File Name: 100-times_table.c
 * Coder: Dagnachew Amare
 */
#include "main.h"
/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @i: The value of the times table to be printed.
 */
void print_times_table(int i)
{
	int n, mul, res;

	if (i >= 0 && i <= 15)
	{
		for (n = 0; n <= i; n++)
		{
			_putchar('0');

			for (mul = 1; mul <= i; mul++)
			{
				_putchar(',');
				_putchar(' ');

				res = n * mul;

				if (res <= 99)
					_putchar(' ');
				if (res <= 9)
					_putchar(' ');

				if (res >= 100)
				{
					_putchar((res / 100) + '0');
					_putchar(((res / 10)) % 10 + '0');
				}
				else if (res <= 99 && res >= 10)
				{
					_putchar((res / 10) + '0');
				}
				_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
