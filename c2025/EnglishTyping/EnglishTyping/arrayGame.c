#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //srand(), rand()
#include <time.h> //time()
/*
   ���� Ÿ�� ����
   - ��ǻ�Ͱ� ����� �ܾ �����ϰ� ���
*/
int main()
{
	//words[�ܾ��� ����(��������)][�ִ빮�ڼ�]
	char words[][20] = { "ant", "bear", "chicken", "eagle", "elephant",
				"horse", "monkey", "lion", "penguin", "tiger" };
	int n = 1;  //���� ��ȣ
	char question[20]; //����
	char answer[20];   //����� ����
	clock_t start, end;  //����, ����ð�
	double elapsedTime;  //�ҿ�ð�

	srand(time(NULL)); //���� ������ ���� �õ� ����

	printf("[���� Ÿ�� ����], �غ�Ǹ� ����> ");
	getchar();  //'\n'(���� ����)
	start = clock();  //���� ���� �ð�
	while (n <= 10) {
		printf("\n���� %d\n", n);
		int size = sizeof(words) / sizeof(words[0]);
		int rndIdx = rand() % size;  //size-10, rndIdx - 0 ~ 9
		strcpy(question, words[rndIdx]); //strcpy(������ ���, ���ڿ�)
		printf("%s\n", question); //���� ����

		scanf("%s", answer); //����� �Է�

		if (strcmp(answer, question) == 0) { //�� �ܾ ��ġ�ϸ�
			printf("���!\n");
			n++; //���� ������ ����
		}
		else {
			printf("��Ÿ! �ٽ� ����!\n");
		}
	}
	end = clock();
	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
	printf("���� �ҿ� �ð�: %.2lf��\n", elapsedTime);

	return 0;
}