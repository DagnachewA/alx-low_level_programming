/*
 * File Name: 1-alphabet.c
 * Coder: Dagnachew Amare Menlarglih
 */
#include "main.h"
/**
 * The function prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);

	_putchar('\n');
}
