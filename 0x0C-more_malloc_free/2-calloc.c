#include "main.h"

/**
 * _calloc - allocate memory for an array
 *
 * @nmemb: Array
 * @size: Number of bytes to be aloocated
 *
 * Return: if nmemb OR size == 0  NULL
 * if malloc fails NULL
 * otherwise return pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	unsigned int j;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	i = malloc(size * nmemb);

	if (i == NULL)
		return (NULL);

	for (j = 0; j < (nmemb * size); j++)
		i[j] = '\0';

	return (i);
}
