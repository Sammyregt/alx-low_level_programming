#include "main.h"

/**
 * print_square - print hashes squares
 *
 * @size: size of the square
 *
 * Return: no return
 */

void print_square(int size)
{
	int p, q;

	for (p = 0; p < size; p++)
	{
		for (q = 0; q < size; q++)
		{
			_putchar(35);
		}
		if (p != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
