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
	/* Seed the random number generator */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Print the number  if the number is positive, zero, or negative */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	/* Print a new line */
	printf("\n");
	return (0);
}
