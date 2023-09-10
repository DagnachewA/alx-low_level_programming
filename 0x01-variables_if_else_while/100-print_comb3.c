#include <stdio.h>
/**
* main - prints a mix of single digit numbers in order,comma and space gap
*
* Return: Always 0 (success)
*/
int main(void)
{
	int i, j;

	putchar('0');
	putchar('1');

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		 {
			 putchar(',');
			 putchar(' ');
			 putchar(i + '0');
			 putchar(j + '0');
		 }
	}
	putchar('\n');
	return (0);
}
