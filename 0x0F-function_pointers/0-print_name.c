#include "main.h"

/**
 * print_name - function that print a name
 *
 * @name: the name ot be printed
 * @f: function pointer
 *
 * Return: no return
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
