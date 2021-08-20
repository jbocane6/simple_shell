#ifndef _HEADER_SHELL_
#define _HEADER_SHELL_
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#define err STDOUT_FILENO
#define DELIM " "

void grid(char **exp, char *cpStr, int *l, int *i);

extern char **environ;

int include_char(char *str, char character);

int count_until(char *strUntil, char *str);

int count_words(char *strDelim, char *str);

char **_strtok(char *str, char *delim);

void arrayFree(char array);

int _getline(char lineptr, int *lineptrSize);

char *_realloc(char *, unsigned int, unsigned int);

char *get_environ(char *pathName);
#endif
