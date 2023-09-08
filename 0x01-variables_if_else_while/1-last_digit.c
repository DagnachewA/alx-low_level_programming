#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int lastDigit;
    /* Seed the random number generator */
	srand(time(0));
    /* Generate a random number */
	n = rand() - RAND_MAX / 2;
    /* Extract the last digit of the number */
	lastDigit = n % 10;
    /* Check the last digit and print the appropriate message */
	if (lastDigit > 5)
	{
	printf("%d greater than 5\n", n);
	}
	else if (lastDigit == 0)
	{
	printf("%d zero\n", n);
	}
	else
	{
	printf("%d less than 6 and not 0\n", n);
	}
    /* Print a new line */
	printf("\n");
	return (0);
}
