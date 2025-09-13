//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main() {
//
//	int sid; //학번
//	string name, dept;  //이름, 학과
//
//	//사용자 입력
//	cout << "학번 입력(숫자)>> ";
//	cin >> sid;
//
//	cin.ignore();  //버퍼에 남은 개행문자('\n') 제거
//
//	cout << "이름 입력>> ";
//	getline(cin, name);
//
//	cout << "학과 입력>> ";
//	getline(cin, dept);
//
//	//파일 열기(추가 쓰기 모드 - append)
//	ofstream fout("student.txt", ios::app);
//	if (!fout) {
//		cout << "파일을 열 수 없습니다.\n";
//		return -1;
//	}
//
//	//파일 쓰기
//	fout << "학번: " << sid << endl;
//	fout << "이름: " << name << endl;
//	fout << "학과: " << dept << endl;
//
//	fout.close();
//
//	return 0;
//}