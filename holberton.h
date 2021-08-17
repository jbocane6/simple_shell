#ifndef _HEADER_SHELL_
#define _HEADER_SHELL_
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#define err STDOUT_FILENO
#define DELIM " "

void grid(char **exp, char *cpStr, int *l, int *i);
char **_strtok(char *str, const char *delim);

#endif
