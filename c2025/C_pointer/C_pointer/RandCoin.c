//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	int you;
//	int coin;
//	//char aspect[][10] = { "", "�ո�", "�޸�" };
//	char* aspect[] = { "", "�ո�", "�޸�" };
//
//	srand(time(NULL));
//
//	//printf("%s\n", aspect[1]); //�ո�
//	printf("�ո��� 1, �޸��� 2, ����� �ٸ� ���� �Է��ϼ���\n");
//
//	while (1){
//		coin = rand() % 2 + 1;
//		printf("������ �������ϴ�. �ո�? �ڸ�? : ");
//		scanf_s("%d", &you);  //1, 2 �Է�
//
//		if (you < 1 || you > 2) { //1 or 2 �̿��� �� �Է�
//			printf("������ �����մϴ�.\n");
//			break;
//		}
//		else {
//			printf("�����: %s, ����: %s\n", aspect[you], aspect[coin]);
//			//���� ������ Ȱ��
//			printf("%s\n", (you == coin) ? "�¾���" : "��!"); 
//		}
//	}
//
//	return 0;
//}
//
