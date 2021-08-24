#include "holberton.h"

/**
 * ctrap - Rewrite prompt when ctrl + c is used
 * @sig: int to indicate next data
 * Return: void
 */
void ctrap(int sig)
{
	write(1, "\n", sig - 1);
	write(1, "$ ", 2);
}

/**
 * *_realloc - check space in memory and re-allocate space if applicable
 * @ptr: pointer to a char variable to be evaluated
 * @old_size: unsigned int variable to allow old memory space
 * @new_size: unsigned int variable to allow new memory space
 * Return: return string with the new size
 * NULL if old_size == new_size,
 * NULL if new_size == 0 && ptr != NULL
 * ptr with the newSize if ptr == NULL
 */
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newSizeMemory = NULL;
	unsigned int i = 0;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
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
		newSizeMemory[i] = ptr[i];
	free(ptr);
	return (newSizeMemory);
}

/**
 * readline - read and check characters of string to assign 
 * dynamic memory
 * @lineptr: double pointer type char that contents the strings
 * @lineptrsize: pointer type int that contents size of strings
 * Return: return string variable lineptr with ending 
 * character '\0'
 */
int readline(char **lineptr, int *lineptrSize)
{
	int i = 0, valRead = 0;
	char character = 0;

	(void)signal(SIGINT, ctrap);
	write(1, "$ ", 2);
	*lineptr = malloc(sizeof(char) * *lineptrSize);
	if (!lineptr)
		return (-1);
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
	return (i - 1);
}
