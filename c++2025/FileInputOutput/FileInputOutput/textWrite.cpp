//#include <iostream>
//#include <fstream> //헤더파일 포함
//using namespace std;
//
//int main() {
//
//	ofstream f1("data.txt"); //파일 쓰기 객체 생성
//	if (f1.fail()) {
//		cerr << "파일을 찾을 수 없습니다\n";
//		return -1;
//	}
//
//	string msg;
//	msg = "행운을 빌어요!";
//
//	//파일에 쓰기
//	f1 << "Good Luck!\n";
//	f1 << msg << endl;
//
//	f1 << 12 << endl;  //정수
//	f1 << 1.414 << endl; //실수
//
//	//파일 닫기
//	f1.close();
//
//	return 0;
//}
//
