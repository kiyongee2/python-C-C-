//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	/*
//	  ���������� Ÿ�� : 1 ~ 3������ �ִ� �ǹ�
//	*/
//	int floor;
//
//	cout << "���� ���� ���� ��������: ";
//	cin >> floor;
//
//	switch (floor)
//	{
//	case 1:
//		cout << "1���� �������ϴ�.\n";
//		break;
//	case 2:
//		cout << "2���� �������ϴ�.\n";
//		break;
//	case 3:
//		cout << "3���� �������ϴ�.\n";
//		break;
//	default:
//		cout << "�ǹ��� ���� ���Դϴ�.\n";
//		break;
//	}
//
//	/*
//		12�� �߿� 31��, 30��, 28�� �� ����
//	*/
//	int month = 10;
//	int day;
//
//	switch (month)
//	{
//	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//		day = 31;
//		break;
//	case 2:
//		day = 28;
//		break;
//	case 4: case 6: case 9: case 11:
//		day = 30;
//		break;
//	default :
//		day = 0;
//		break;
//	}
//
//	cout << month << "���� " << day << "�ϱ��� �ֽ��ϴ�.\n";
//
//	return 0;
//}