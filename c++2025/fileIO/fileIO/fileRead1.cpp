//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	//파일 읽기
//	ifstream f1("data.txt");
//	string str; //읽은 내용 저장
//
//	if (!f1.is_open()) {
//		cerr << "파일을 열 수 없습니다.\n";
//		return 1;
//	}
// 
//	//getline(f1, str)은 공백과 개행을 포함한 전체 줄을 읽음
//	while (getline(f1, str)) {
//		cout << str << endl;
//	}
//
//	//ifsteam은 자동으로 close() 호출, 생략 가능
//	f1.close();  
//
//	return 0;
//}