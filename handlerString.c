#include "holberton.h"

//#define TEST_TOK

int include_char(char *str, char character)
{
	if (!str || !*str)
		return (0);
	if (*str == character)
		return (1);
	return (include_char(str + 1, character));
}

int count_until(char *strUntil, char *str)
{
	if (!strUntil || !*strUntil || !str || !*str)
		return (0);
	if (!include_char(strUntil, *str))
		return (1 + count_until(strUntil, str + 1));
	return (0);
}

char *cp_until(char *strUntil, char *strToCopy)
{
	int count = count_until(strUntil, strToCopy), i = 0;
	char *newStr = malloc(sizeof(char) * count);

	if (!newStr)
		return (NULL);

	for (i = 0; i < count; i++)
		newStr[i] = strToCopy[i];
	newStr[i] = '\0';
	return (newStr);
}

int count_words(char *strDelim, char *str)
{
	int sizeWorld;

	if (!str || !*str || !strDelim || !*strDelim)
	{
		return (0);
	}
	if (!include_char(strDelim, *str))
	{
		sizeWorld = count_until(strDelim, str);
		return (1 + count_words(strDelim, str + sizeWorld));
	}
	return (count_words(strDelim, str + 1));
}

char **_strtok(char *str, char *delim)
{
	char **arrayWorlds;
	int indexWorlds = 0;
	int sizeWorlds = count_words(delim, str), i = 0;

	arrayWorlds = malloc(sizeof(char *) * sizeWorlds + 1);
	if (!arrayWorlds)
	{
		printf("ERROR malloc 1");
		exit(100);
	}

	while (str[i])
	{
		if (!include_char(delim, str[i]))
		{
			arrayWorlds[indexWorlds] = cp_until(delim, str + i);
			i += count_until(delim, str + i);
			indexWorlds++;
		}
		else
			i++;
	}
	arrayWorlds[indexWorlds] = NULL;

	return (arrayWorlds);
}

void arrayFree(char **array)
{
	if (!array || !*array)
	{
		return;
	}
	arrayFree(array + 1);
	free(*array);
}
/*
#ifdef TEST_TOK
int main(void)
{
	int i = 0;
	char *test = "  ls  -l   /bin  ";
	char *strCopy = NULL;
	char **split = NULL;

	printf("Test 1: include_char()\n");
	while (test[i])
	{
		printf("|%c| - |%d|\n", test[i], include_char(DELIM, test[i]));
		i++;
	}
	i = 0;
	printf("\nTest 2: count_until()\n");
	while (test[i])
	{
		if (!include_char(DELIM, test[i]))
		{
			printf("|%d| - |%s|\n", count_until(DELIM, test + i), test + i);
			i += count_until(DELIM, test + i);
		}
		else
			i++;
	}

	printf("\nTest 3: cp_until()\n");
	i = 0;
	while (test[i])
	{
		if (!include_char(DELIM, test[i]))
		{
			strCopy = cp_until(DELIM, test + i);
			printf("|%s| - |%s|\n", strCopy, test + i);
			i += count_until(DELIM, test + i);
			free(strCopy);
		}
		else
			i++;
	}
	printf("\nTest 4: count_words()\n");
	i = 0;
	while (test[i])
	{
		if (!include_char(DELIM, test[i]))
		{
			printf("|%d| - |%s|\n", count_words(DELIM, test + i), test + i);
			i += count_until(DELIM, test + i);
		}
		else
			i++;
	}

	printf("\nTest 5: _strtok()\n");
	i = 0;
	split = _strtok(test, DELIM);
	while (split[i])
	{
		printf("|%s|\n", split[i]);
		i++;
	}

	printf("\nTest 6: arrayFree()\n");
	i = 0;
	arrayFree(split);
	free(split);
}
#endif
*/
