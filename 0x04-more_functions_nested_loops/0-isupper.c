#include "main.h"

/**
 * _isupper - check if character is an uppercase or not
 *
 * @c: inputer character
 *
 * Return: 1 if is an uppercase, 0 if its not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
