|#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>


void exec_command(char *command)
{

}

int validate_slash(char *command)
{
    int i = 0;

    while (command[i])
    {
        if (command[i] == '/')
            return (1);
        i++;
    }
    return (0);
}

void validate_built_in(char *command)
{
    struct stat st;
    int a = 0;

    if (validate_slash(command))
    {
        printf("Command!");
        a = stat(command, &st);
        printf("%d ",a);
    }
    else
    {
        printf("No command!");
        a = stat(command, &st);
        printf("%d ",a);
    }
}

int main(void)
{
    int a = 0;

    char *splt = "ls";

    validate_built_in(splt);
}
