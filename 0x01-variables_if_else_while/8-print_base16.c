#include<stdio.h>
/**
* main - prints all the numbers of base 16 in lowercase
*
* Return: always 0(success)
*/
int main(void)
{
	char num, hex;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
