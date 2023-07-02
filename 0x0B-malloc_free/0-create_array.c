#include <stdlib.h>

/**
 * create_array- creates an array of characters,
 * initialized by a character
 *
 * @size: size of array
 * @c: the initialzer
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);

	free(array);
}
