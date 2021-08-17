#include "holberton.h"

int main(void)
{
	int k, val = 1;
	char *prompt = "$ ";
	char *buffer;
	char **exp;
	size_t bufsize;
	ssize_t characters;
	while (val)
	{
		write(STDOUT_FILENO, prompt, strlen(prompt));
		characters = getline(&buffer, &bufsize, stdin);
		if (characters == -1)
		{
			printf("ERROR");
			exit(123);
		}
		exp = _strtok(buffer, DELIM);
		for (k = 0; exp[k]; k++)
		{
			write(STDOUT_FILENO, exp[k], strlen(exp[k]));
		}
	}

	return (0);
}
