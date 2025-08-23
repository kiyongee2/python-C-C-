//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int customer, column, row;
//
//	cout << "고객수: ";
//	cin >> customer;
//
//	cout << "열 수: ";
//	cin >> column;
//
//	if (customer % column == 0) {
//		row = customer / column;
//	}
//	else {
//		row = (customer / column) + 1;
//	}
//	//printf("%d개의 줄이 필요합니다.\n", row);
//
//	for (int i = 0; i < row; i++) {
//		for (int j = 1; j <= column; j++) {
//			int seatNum = column * i + j;
//			if (seatNum > customer) break;
//			cout << "좌석" << seatNum << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}
