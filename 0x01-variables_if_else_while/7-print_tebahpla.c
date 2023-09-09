#include <stdio.h>
/**
* main - prints the alphabet in lowercase in reverse order
*
* Return: Always 0 (success)
*/
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
