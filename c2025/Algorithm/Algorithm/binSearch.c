//#include <stdio.h>
///*
//	�̺� �˻�
//	- ���� ������ �Ǿ��־�� ��
//*/
//
//int main()
//{
//	int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//	int i; //�ε���
//	int x = 8;  //ã�� ��
//	int found = 0;  //���� ����(ã��, ��ã��)
//
//	printf("===== ���� �˻� =====\n");
//	for (i = 0; i < 9; i++) {
//		if (a[i] == x) {
//			printf("%d�� a[%d]�� �ֽ��ϴ�.\n", x, i);
//			found = 1;  //ã��
//			break;
//		}
//	}
//	if (!found) { //��ã��
//		printf("%d�� �����ϴ�.\n", x);
//	}
//
//	printf("===== �̺� �˻� =====\n");
//	int low, high, mid;
//	int x;  //�˻��� ��
//	int found; //���� �÷���
//
//	int a[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//
//	low = 0;  //ù �ε���
//	high = 8; //������ �ε���
//	x = 8;  
//	found = 0;
//	
//	while (low <= high) {
//		mid = (low + high) / 2; //�߰���
//		if (a[mid] == x) {
//			found = 1;
//			break;
//		}
//		else if (a[mid] < x) {
//			low = mid + 1;
//		}
//		else {
//			high = mid - 1;
//		}
//		/*
//			a[4] < 8, low=5, mid=6
//			a[6] < 8, low=7, mid=7
//			a[7] = 8  ã��
//		*/
//	}
//	if (a[mid] == x) {
//		printf("%d�� a[%d]�� �ֽ��ϴ�.\n", x, mid);
//	}
//	else {
//		printf("%d�� �����ϴ�.\n", x);
//	}
//
//	return 0;
//}
