#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX_WORDS 11
#define MAX_LENGTH 20

int main()
{
	FILE* fp;

	if (fopen_s(&fp, "words.txt", "r") != 0) {
		perror("���� ���⿡ �����߽��ϴ�!\n");
		return 1;
	}

	char words[MAX_WORDS][MAX_LENGTH]; // �ܾ ������ �迭
	int count = 0; //�ܾ��� ����

	while (fgets(words[count], MAX_LENGTH, fp) != NULL) {
		// ���� ���� ���� (fgets�� ���� ���ڵ� ����)
		words[count][strcspn(words[count], "\n")] = '\0';
		count++;
		/*
		fgets(words[count], MAX_LENGTH, fp) : ���Ͽ��� ���پ�
					 �о words[count]�� ����
		strcspn(words[count], "\n") : ���� ������ ��ġ�� ã��.
		words[count][strcspn(words[count], "\n")] = '\0' : ���� ���ڸ�
				   '\0' �ι��ڷ� �ٲ�
		*/
	}
	//printf("�ܾ��� ����: %d\n", count);
	fclose(fp);

	char* question;   //����
	char answer[20];  //�����
	int n = 1;  //���� ��ȣ
	clock_t start, end;
	double elapsedTime; //���� �ҿ� �ð�

	srand(time(NULL)); //seed ����
	int size = sizeof(words) / sizeof(words[0]);

	printf("���� Ÿ�� ����, �غ�Ǹ� ����>");
	getchar();

	start = clock();  //���� �ð�

	while (n <= 10)
	{
		printf("\n���� %d\n", n);
		int rndIdx = rand() % size;
		question = words[rndIdx];

		printf("%s\n", question);  //���� ����
		scanf_s("%s", answer, sizeof(answer));  //����� �Է�

		if (strcmp(question, answer) == 0)
		{
			printf("���!\n");
			n++;   //���� ����
		}
		else
		{
			printf("��Ÿ! �ٽ� ����!\n");
		}
	}
	end = clock(); //���� �ð�
	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
	printf("���� �ҿ� �ð�: %.2lf��\n", elapsedTime);

	system("pause");  //exe ���� ����� �ʼ�

	return 0;
}