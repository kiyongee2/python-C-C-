//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define MAX_WORDS 100  // �ִ� �ܾ� ����
//#define MAX_LENGTH 50  // �ܾ� �ִ� ����
//
//int main()
//{
//	//���� Ÿ�� ����
//	FILE* fp = fopen("words.txt", "r");
//	
//	char words[MAX_WORDS][MAX_LENGTH]; // �ܾ ������ �迭
//	int count = 0; //�ܾ��� ����
//
//	// ���Ͽ��� �ܾ� �б�
//    while (fgets(words[count], MAX_LENGTH, fp) != NULL && count < MAX_WORDS) {
//        // ���� ���� ���� (fgets�� ���� ���ڵ� ������)
//        words[count][strcspn(words[count], "\n")] = '\0';
//        count++;
//    }
//	printf("�ܾ��� ����: %d\n", count);
//
//	fclose(fp);
//
//	char answer[30];  //����� �Է�
//
//	srand(time(NULL)); //seed ����
//
//	int n = 1;  //���� ��ȣ
//	printf("���� Ÿ�� ����, �غ�Ǹ� ���� >\n");
//	getchar();
//
//	while (n <= 10)
//	{
//		printf("���� %d", n);
//
//		int rndIdx = rand() % count;
//		char* question = words[rndIdx];
//		printf("\n%s\n", question);
//
//		scanf("%s", answer);
//
//		if (strcmp(answer, question) == 0)
//		{
//			printf("���!\n");
//			n++;
//		}
//		else
//		{
//			printf("��Ÿ! �ٽ� ����!\n");
//		}
//	}
//
//	printf("������ �����մϴ�.");
//
//	return 0;
//}