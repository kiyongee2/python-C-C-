//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <time.h>
//#include <stdlib.h>
//
//int main()
//{
//	int you;
//	int coin;
//	//char aspect[][10] = { "", "�ո�", "�޸�" };
//	char* aspect[] = { "", "�ո�", "�޸�" };
//	srand(time(NULL));
//
//	//printf("%s\n", aspect[0]);  //�ո�
//
//	printf("�ո��� 1, �޸��� 2, ����� �ٸ� ���� �Է��ϼ���\n");
//	while (1) {
//		coin = rand() % 2 + 1;
//		printf("������ �������ϴ�. �ո�? �ڸ�? : ");
//		scanf("%d", &you);
//		if (you < 1 || you > 2) {
//			printf("������ �����մϴ�.\n");
//			break;
//		}
//		else {
//			printf("�����: %s ����: %s\n", aspect[you], aspect[coin]);
//			printf("%s\n", (you == coin) ? "�¾���" : "��!");
//		}
//	}
//	return 0;
//}