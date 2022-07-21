#include "main.h"

/**
 * _puts_recursion - print a string, followed by a new line
 *
 * @s: string
 *
 * Return: no return
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*S);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\0');
}
