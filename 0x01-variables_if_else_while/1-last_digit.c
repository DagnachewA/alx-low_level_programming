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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
	printf("%d is greater than 5\n", n);
	}
	else if (lastDigit == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is less than 6 and not 0\n", n);
	}
	printf("\n");
	return (0);
}
