/*
 * File Name: 11-print_to_98.c
 * Coder: Dagnachew Amare Menlargilih
 */
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @i: The number to begin counting at.
 */
void print_to_98(int i)
{
	if (i >= 98)
	{
		while (i > 98)
			printf("%d, ", i--);
		printf("%d\n", i);
	}

	else
	{
		while (i < 98)
			printf("%d, ", i++);
		printf("%d\n", i);
	}
}
