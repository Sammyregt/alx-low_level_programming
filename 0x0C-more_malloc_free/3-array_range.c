#include "main.h"

/**
 * array_range - creates an array of int
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int index, size, *array;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
