#include <stdlib.h>
#include <stdio.h>

/**
* *argstostr - concatenates all arguements to the program
* @ac: arguement count
* @av: pointer to arguements
* Return: pointer to new space in memory or null
**/
char *argstostr(int ac, char **av)
{
	char *strDup;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);

	size = 0;
	/* count the number of chars in each string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	size++;

/**
* ptr - allocate memory for total number of chars
* and new line for each word
**/
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k++] = av[i][j];
		}
		ptr[k++] = '\n';
	}
		ptr[k] = '\0';
	return (ptr);
}
