//#include <stdio.h>
//
//int main()
//{
//	//�̺� Ž�� 
//	int low, high, mid;
//	int x, found; 
//
//	//���ĵ� �迭
//	int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//
//	low = 0;  //ù �ε���
//	high = 8; //������ �ε���
//	x = 8;    //ã�� ��
//	found = 0; //����(ã��/��ã��)
//
//	while (low <= high) {
//		mid = (low + high) / 2;  //�߰����� ��ġ
//		//printf("%d\n", mid); //4 -> 6 -> 7
//
//		if (arr[mid] == x) {
//			printf("%d�� a[%d]�� �ֽ��ϴ�.", x, mid);
//			found = 1; //ã��
//			break;
//		}
//		else if (arr[mid] < x) {
//			low = mid + 1;
//		}
//		else { //a[mid] > x
//			high = mid - 1;
//		}
//		/*
//		    mid=4, 5<8, low=5, high=8, mid=6(13/2)
//			mid=6, 7<8, low=7, high=8, mid=7(15/2)
//			mid=7, 8=8, ã��
//		*/
//	}
//
//	if (!found) //ã�� ����
//		printf("%d�� �����ϴ�.", x);
//
//	return 0;
//}
//
