#include "main.h"

/**
 * print_alphabet_alphabet_x10 - print the alpahbet 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int p, q;

	for (p = 0; p <= 9; p++)
	{
		for (q = 97; q <= 122; q++)
		{
			_putchar(q);
		}
		_putchar('\n');
	}
}
