//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int customer, column, row;
//
//	cout << "����: ";
//	cin >> customer;
//
//	cout << "�� ��: ";
//	cin >> column;
//
//	if (customer % column == 0) {
//		row = customer / column;
//	}
//	else {
//		row = (customer / column) + 1;
//	}
//	//printf("%d���� ���� �ʿ��մϴ�.\n", row);
//
//	for (int i = 0; i < row; i++) {
//		for (int j = 1; j <= column; j++) {
//			int seatNum = column * i + j;
//			if (seatNum > customer) break;
//			cout << "�¼�" << seatNum << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}
