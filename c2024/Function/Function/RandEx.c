//#include <stdio.h>
//#include <time.h>
//
//int main()
//{
//    // srand(10); //seed�� ����(����)
//    srand(time(NULL));  //seed�� ����(����)
//
//    int rndVal = rand();
//    printf("%d\n", rndVal);
//    printf("============\n");
//
//    //����(2���� ���)
//    int coin = rand() % 2;
//    printf("%d\n", coin);
//
//    // 0-�ո�, 1-�޸�
//    if (coin % 2 == 0)
//    {
//        printf("�ո�\n");
//    }
//    else
//    {
//        printf("�޸�\n");
//    }
//    printf("============\n");
//
//    //�ֻ���(1~6)
//    int dice = rand() % 6 + 1;
//    printf("�ֻ��� ��: %d\n", dice);
//
//    //�ǽ� - �ֻ��� 10�� ������
//    for (int i = 0; i < 10; i++)
//    {
//        dice = rand() % 6 + 1;
//        printf("%d\n", dice);
//    }
//
//	//���� ���� ��
//	int n = rand() % 3;
//
//	switch (n)
//	{
//	case 0: printf("����\n"); break;
//	case 1: printf("����\n"); break;
//	case 2: printf("��\n"); break;
//	default: printf("����\n"); break;
//	}
//
//	return 0;
//}