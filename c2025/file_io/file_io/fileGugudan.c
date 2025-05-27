#include <stdio.h>

int main()
{
	FILE* fp;

	fopen_s(&fp, "gugudan.txt", "w");
	if (fp == NULL) {
		perror("파일 열기에 실패함\n");
		return 1;
	}

	//코드 작성
	


	fclose(fp);

	return 0;
}

