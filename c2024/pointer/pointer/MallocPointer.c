#include <stdio.h>
#include <stdlib.h>

int main() {

	int* p[3]; //intÇü º¯È¯
	int num = 1;

	//p[0] = (int*)malloc(sizeof(int) * 4);
	
	for (int i = 0; i < 3; i++)
	{
		p[i] = (int*)malloc(sizeof(int) * 4);
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			p[i][j] = num++;
			printf("%4d", p[i][j]);
		}
		puts("\n");
	}

	free(p);

	return 0;
}