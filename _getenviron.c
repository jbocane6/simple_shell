#include "holberton.h"

extern char **environ;

char *get_environ(char *pathName)
{
    int i = 0, j = 0;
    for (i = 0; environ[i]; i++)
    {
        for (j = 0; pathName[j]; j++)
        {
            if (environ[i][j] != pathName[j])
            {
                break;
            }
        }
        if (pathName[j] == '\0' && environ[i][j] == '=')
        {
            return (&environ[i][j +1]);
        }
    }
    return (NULL);
}

/*
int main(void)
{
    char *path = "PATH";
    char *value = NULL;
    value = get_environ(path);
    printf("%s", value);

}
*/
