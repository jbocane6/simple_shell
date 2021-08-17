#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define err STDOUT_FILENO

char ** _strtok(char *str, const char *delim)
{
    char *cpStr;
    char **exp;
    int i = 0, j = 0, k, l = 0, args = 1;

    for (i = 0; str[i]; i++)
    {
        if (str[i] == *delim && str[i + 1] != '\0')
            args++;
    }

    exp = malloc(sizeof(char *) * args + 1);
    if (!exp)
    {
        printf("ERROR malloc 1");
        exit(100);
    }

    cpStr = malloc(sizeof(char) * strlen(str));
    if (!cpStr)
    {
        printf("ERROR malloc 2");
        exit(100);
    }

    i = 0;
    while (str[j])
    {
        if (str[j] != *delim)
        {
            cpStr[i] = str[j];
            i++;
        }
        else
        {
            exp[l] = malloc(sizeof(char) * i + 1);
            if (!exp[l])
            {
                printf("ERROR malloc 3");
                exit(100);
            }
            for (k = 0; k < i; k++)
                exp[l][k] = cpStr[k];
            exp[l][k] = '\0';
            l++;
            i = 0;
        }
        j++;
    }
    if (i > 0)
    {
        exp[l] = malloc(sizeof(char) * i + 1);
        if (!exp[l])
        {
            printf("ERROR malloc 4");
            exit(100);
        }
        for (k = 0; k < i; k++)
            exp[l][k] = cpStr[k];
        exp[l][k] = '\0';
        l++;
        i = 0;
    }
    exp[l] = '\0';
    return (exp);
    
}

int main(int argc, char *argv[])
{
    int k;
    char **exp;

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
    exp = _strtok(argv[1], argv[2]);
    for (k = 0; exp[k]; k++)
    {
        printf("%s\t", exp[k]);
    }
    return (0);
}