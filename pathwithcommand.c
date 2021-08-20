#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

char *combine(char *command, char **splitPath)
{
	int i = 0, j = 0, k = 0, sizeCommand, sizeSplitPath;
	int sizeTotal, flag = 0, flag2 = 0;
	struct stat st;
	char *commandCombine;
	while (splitPath[i])
	{
		sizeCommand = strlen(command) + 1;
		sizeSplitPath = strlen(splitPath[i]) + 1;
		sizeTotal = sizeCommand + sizeSplitPath;
		commandCombine = malloc(sizeof(char) * (sizeTotal));
		if (!commandCombine)
			return (NULL);
		for (j = 0; j < sizeTotal; j++)
		{
			if (splitPath[i][j] != '\0' && !flag2)
			{
				commandCombine[j] = splitPath[i][j];
			}
			else
			{
				flag2 = 1;
				if (!flag)
				{
					commandCombine[j] = '/';
					flag = 1;
				}
				else
				{
					commandCombine[j] = command[k];
					k++;
				}
			}
		}
		flag2 = 0;
		flag = 0;
		k = 0;
		commandCombine[j] = '\0';
		//printf("%s--size=%ld\n", commandCombine, strlen(commandCombine));
		if (stat(commandCombine, &st) == 0)
		{
			return (commandCombine);
		}
		else
		{
			free(commandCombine);
			i++;
		}
	}
	return ("ERROR");
}

int main(void)
{
	int i = 0;
	char *textF = "ls";
	char **text = malloc(1024);
	text[0] = malloc(20);
	text[1] = malloc(20);
	text[2] = malloc(20);
	text[3] = malloc(20);
	text[0] = "Hola";
	text[1] = "/bisd";
	text[2] = "estas";
	text[3] = NULL;
	char *newCommand = combine(textF, text);

	printf("-%s-\n", newCommand);
	/*
	while (text[i])
	{
		printf("%s\n", text[i]);
		i++;
	}
	*/
}
