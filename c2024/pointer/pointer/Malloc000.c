#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable : 4996)

int main() {

	int* ip;
	int i;

	ip = (int *)malloc(sizeof(int) * 4);

	if (ip == NULL)
	{
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);
	}
	//�迭�� �����ϱ�
	ip[0] = 10;
	ip[1] = 20;
	ip[2] = 30;
	ip[3] = 40;

	for (i = 0; i < 4; i++)
	{
		printf("%d\n", ip[i]);
	}

	//�������� �����ϱ�
	*ip = 50;
	*(ip + 1) = 60;
	*(ip + 2) = 70;
	*(ip + 3) = 80;

	for (i = 0; i < 4; i++)
	{
		printf("%d %d\n", ip[i], *(ip + i));
	}

	free(ip);

	return 0;
}
