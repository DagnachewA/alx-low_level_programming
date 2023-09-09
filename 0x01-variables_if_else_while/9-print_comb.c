#include <stdio.h>
/**
* main - prints single digit numbers in order,comma and space gap
*
* Return: Always 0 (success)
*/
int main(void)
{
	putchar('0');
	for (int i = 1; i < 10; i++)
	{
	putchar(',');
	putchar(' ');
	putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
