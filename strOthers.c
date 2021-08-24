#include "holberton.h"

/**
 * *move_last_until - receive string and return the command that
 * be in the last position of the path
 * @string: variable type char that contains the path
 * @last: variable type char to indicate end of path to extract
 * the command
 * Return: return NULL if string is NULL, if succeed return name
 * of command
 */
char *move_last_until(char *string, char last)
{
	char *result = NULL;

	if (!string || !*string)
		return (NULL);
	result = move_last_until(string + 1, last);
	if (result != NULL)
		return (result);
	if (*string == last)
		return (string + 1);
	return (NULL);
}

/**
 * _strlen - count the characters of string and return size
 * @s: pointer to string char variable 
 * Return: return size of s of 0 if it is void
 */
int _strlen(char *s)
{
	return (*s != '\0' ? 1 + _strlen(s + 1) : 0);
}

/**
 * _atoi - convert the string to number
 * @s: pointer to string char variable 
 * Return: return number
 */
int _atoi(char *s)
{
	int numero = 0, i;

	for (i = 0; s[i]; i++)
		numero = (numero * 10) + (s[i] - '0');
	return (numero);
}
