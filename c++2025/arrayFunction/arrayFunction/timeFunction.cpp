//#include <iostream>
//#include <ctime>
//#include <thread> //this_thread::sleep_for()
//using namespace std;
//
//int main()
//{
//	//NULL ��� nullptr ���
//	time_t now = time(nullptr); //���� �ð�
//
//	//1970.1.1 ���� ���ĺ��� ����ð����� �ʷ� ����
//	cout << now << "��\n";
//	cout << now / (24 * 60 * 60) << "��\n";
//	cout << now / (365 * 24 * 60 * 60) << "��\n";
//
//	//���� �ð� ����
//	time_t start, end;
//
//	//start = time(nullptr); 
//	time(&start); //���� �ð�
//	
//	for (int i = 1; i <= 10; i++) {
//		cout << i << endl;
//		//0.5�� �������� ���
//		this_thread::sleep_for(chrono::milliseconds(500));
//	}
//
//	//end = time(nullptr);
//	time(&end);  //���� �ð�
//	cout << "����ð�: " << (end - start) << "��\n";
//
//	return 0;
//}