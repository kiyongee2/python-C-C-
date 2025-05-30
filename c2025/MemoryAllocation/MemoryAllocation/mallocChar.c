#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* pc;
	int i;
	pc = malloc(sizeof(char) * 26);

	*pc = 'A';
	printf("%c\n", *pc);

	*(pc + 1) = 'A' + 1;
	printf("%c\n", *(pc + 1));

	//¿˙¿Â
	for (i = 0; i < 26; i++) {
		*(pc + i) = 'A' + i;
	}

	for (i = 0; i < 26; i++) {
		printf("%c ", *(pc + i));
	}

	free(pc);

	return 0;
}