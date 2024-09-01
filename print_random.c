#include "random.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	char word[8];
	int a;

	/* seed the randomizer */
	srand((unsigned)time(NULL));

	printf("Today's random word: ");

	for (a = 0; a < 7; a++)
	{

		word[a] = randchar();
	}

	word[7] = '\0';

	printf("%s\n", word);

	return 0;
}
