#include "main.h"

/**
 * _strlen - returns lenght of a string
 *
 * @s: input string
 *
 * Return: lenght of a string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;

	return (count);
}
