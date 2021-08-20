#include "holberton.h"

char **_strtok(char *str, char *delim);
int _getline(char **lineptr, int *lineptrSize);

int main(void)
{
	int k, val = 1;
	char *prompt = "$ ";
	char *buffer = NULL, *pathCopy = NULL;
	char **split = NULL, **splitPath = NULL;
	int bufsize = 1024;
	ssize_t characters = 0;
	while (val)
	{
		write(STDOUT_FILENO, prompt, strlen(prompt));
		characters = _getline(&buffer, &bufsize);
		if (characters == -1)
		{
			printf("ERROR");
			exit(123);
		}
		split = _strtok(buffer, DELIM);
		pathCopy = get_environ("PATH");
		splitPath = _strtok(pathCopy, ":");
		for (k = 0; split[k]; k++)
		{
			write(STDOUT_FILENO, split[k], strlen(split[k]));
			printf("\n");
		}
	}
	return (0);
}
