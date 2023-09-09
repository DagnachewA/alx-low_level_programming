#include <stdio.h>
/**
* main - prints the single digit numbers
*
* Return: Always 0 (success)
*/
int main(void)
{
	int nu = 0;
	while (nu <= 9)
	{
		putchar(nu + '0');
			nu++;
	}
	putchar('\n');
	return (0);
}
