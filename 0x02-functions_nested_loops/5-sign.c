#include "main.h"

/**
 * print_sign - Determine if a number is greater than zero.
 * is zero or less than zero
 *
 * @n: the character in ASII code
 *
 * Return: 1 if n greater than zero.
 * 0 if n is zero and 
 * -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n > 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
