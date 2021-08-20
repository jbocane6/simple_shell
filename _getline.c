#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newSizeMemory = NULL;
	int i = 0;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		free(ptr);
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newSizeMemory = malloc(new_size);
	if (newSizeMemory == NULL)
	{
		free(ptr);
		free(newSizeMemory);
		return (NULL);
	}
	for (i = 0; i < old_size; i++)
	{
		newSizeMemory[i] = ptr[i];
	}
	free(ptr);
	return (newSizeMemory);
}

int _getline(char **lineptr, int *lineptrSize)
{
	int i = 0, valRead = 0;
	char character = 0;

	*lineptr = malloc(sizeof(char) * *lineptrSize);
	if (!lineptr)
	{
		return (-1);
	}
	while (character != '\n')
	{
		valRead = read(STDIN_FILENO, &character, 1);
		if (valRead <= 0)
		{
			free(*lineptr);
			return (-1);
		}
		(*lineptr)[i] = character;
		i++;
		if (i >= *lineptrSize)
		{
			*lineptr = _realloc(*lineptr, *lineptrSize, *lineptrSize << 1);
			*lineptrSize = *lineptrSize << 1;
		}
	}
	(*lineptr)[i - 1] = '\0';
	return (i);
}
/*
int main(void)
{
	char *buffer = NULL;
	int size = 1024;
	int val = _getline(&buffer, &size);

	free(buffer);
	return (0);
}
*/
