//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main() {
//
//	ifstream f1("data.txt");
//	if (f1.fail()) {
//		cerr << "파일을 찾을 수 없습니다\n";
//		return -1;
//	}
//
//	string str;  //읽은 내용 저장 변수
//
//	while (!f1.eof()) {
//		getline(f1, str);
//		cout << str << endl;
//	}
//
//	f1.close();
//
//	return 0;
//}