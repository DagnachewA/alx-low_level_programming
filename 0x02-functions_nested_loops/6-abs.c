/*
 * File Name: 6-abs.c
 * Coder: Dagnachew Amare
 */
#include "main.h"
/**
 * Computes the absolute value of an integer.
 * @i: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
