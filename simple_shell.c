#include "holberton.h"

int main(void)
{
	int flag = 1, size = 1024, character = 0, loops = 1;

	while (flag > 0 && flag < 2)
	{
		char *strReceived = NULL, **strfather = NULL;

		character = readline(&strReceived, &size);
		if (character > 0)
		{
			character = count_words(DELIM, strReceived);
			strfather = _strtok(strReceived, DELIM);
			flag = validateMainFunctions(strfather, strReceived, character, loops);
		}
		freestr(strfather, strReceived);
		loops++;
	}
	return (flag);
}
