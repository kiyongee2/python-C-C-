#include <stdio.h>

int main()
{
	FILE* fp;

	fopen_s(&fp, "gugudan.txt", "w");
	if (fp == NULL) {
		perror("���� ���⿡ ������\n");
		return 1;
	}

	//�ڵ� �ۼ�
	


	fclose(fp);

	return 0;
}

