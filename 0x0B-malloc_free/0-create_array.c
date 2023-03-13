#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an arry of size with char c
 * @size: unsigned int type
 * @c: char type
 * Return: Return pointer to array created
 */

char *create_array(unsigned int size, char c)
{	char *y;
	unsigned int i;
		if (size == 0)
		{
			return (NULL);

		}
	y = malloc((size) * sizeof(char));
	if (y == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		y[i] = c;
		i++;
	}
	y[i] = '\0';
	return (y);
}
