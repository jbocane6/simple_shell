#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void _strtok(char *str, const char *delim)
{
    char *cpStr;
    int i = 0, j = 0;

    cpStr = malloc(sizeof(char) * strlen(str));
    if (!cpStr)
    {
        printf("ERROR malloc");
        exit(100);
    }

    while (str[j])
    {
        if (str[j] != *delim)
        {
            cpStr[i] = str[j];
            i++;
        }
        else
        {
            write(STDOUT_FILENO, cpStr, i);
            write(STDOUT_FILENO, "\n", 1);
            i = 0;
        }
        j++;
    }
    if (i > 0)
    {
        write(STDOUT_FILENO, cpStr, i);
        write(STDOUT_FILENO, "\n", 1);
        i = 0;
    }
}

int main(int argc, char *argv[])
{

    if (argc != 3)
    {
        printf("ERROR");
        exit(98);
    }

    if (!argv[1] || !argv[2])
    {
        printf("ERROR ARGVS");
        exit(99);
    }
    _strtok(argv[1], argv[2]);
    return (0);
}