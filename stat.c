#include "holberton.h"

/**
 * print_number - called to main()
 * @n: number to convert
 * Return: withour return
 */
void print_number(int n)
{
	int n1 = n;
	int arr[sizeof(int) * 8];
	int i = 0;
	int j, r;

	if (n != 0)
	{
		while (n != 0)
		{
			r = n % 10;
			arr[i] = r;
			i++;
			n = n / 10;
		}
		for (j = i - 1; j > -1; j--)
		{
			if (n1 < -2147483647)
			{
				int val = arr[j] * -1;

				_putchar(val + '0');
			}
			else
			{
				_putchar(arr[j] + '0');
			}
		}
	}
}

int statPath(char **strfather, int loops, int flag)
{
	struct stat st;
	/* validate if deault command is absolute path */
	/* example: strfather[0] = /bin/ls */
	if (stat(strfather[0], &st) == 0)
	{
		return (callExe(strfather));
	}
	else
	{
		strfather[0] = combine(strfather[0], _strtok(get_environ("PATH"), ":"));
		if (strfather[0] && !flag)
		{
			return (statPath(strfather, loops, 1));
		}
		else
		{
			write(1, "sh: ", 4);
			print_number(loops);
			write(1, ": ", 2);
			write(1, strfather[0], _strlen(strfather[0]));
			write(1, ": not found\n", 12);
		}
	}
	return (1);
}

int callExe(char **strfather)
{
	char stringDir[1024];
	pid_t child;

	child = fork();
	if (child == -1)
	{
		perror("Error:");
		return (0);
	}
	if (child == 0)
	{
		stringDir[0] = '\0';
		_strcat(stringDir, strfather[0]);
		strfather[0] = move_last_until(strfather[0], '/');
		if (execve(stringDir, strfather, NULL) == -1)
			perror("Error");
		exit(0);
	}
	else
		wait(0);

	return (1);
}
