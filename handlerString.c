#include "holberton.h"

#define TEST_TOK

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
	int count = count_until(strUntil, strToCopy) + 1, i = 0;
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
	if (!str || !*str || !strDelim || !*strDelim)
	{
		return (0);
	}
	if (!include_char(strDelim, *str))
	{
		int sizeWorld = count_until(strDelim, str);
		return (1 + count_words(strDelim, str + sizeWorld));
	}
	return (count_words(strDelim, str + 1));
}

#ifdef TEST_TOK
int main(void)
{
	int i = 0;
	char *test = "  ls  -l   /bin  ";
	char *strCopy = NULL;

	printf("Test 1:\n");
	while (test[i])
	{
		printf("%c - %d\n", test[i], include_char(DELIM, test[i]));
		i++;
	}
	i = 0;
	printf("\nTest 2:\n");
	while (test[i])
	{
		if (!include_char(DELIM, test[i]))
		{
			printf("%d - %s\n", count_until(DELIM, test + i), test + i);
			i += count_until(DELIM, test + i);
		}
		else
			i++;
	}

	printf("\nTest 3:\n");
	i = 0;
	while (test[i])
	{
		if (!include_char(DELIM, test[i]))
		{
			strCopy = cp_until(DELIM, test + i);
			printf("%s - %s\n", strCopy, test + i);
			i += count_until(DELIM, test + i);
			free(strCopy);
		}
		else
			i++;
	}
	printf("\nTest 4:\n");
	i = 0;
	while (test[i])
	{
		if (!include_char(DELIM, test[i]))
		{
			printf("%d - %s\n", count_words(DELIM, test + i), test + i);
			i += count_until(DELIM, test + i);
		}
		else
			i++;
	}
}
#endif
