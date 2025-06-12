//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int customer, column, row;
//
//	printf("고객수: ");
//	cin >> customer;
//
//	printf("열 수: ");
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
//			int seat = column * i + j;
//			if (seat > customer) break;
//			cout << seat << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}
