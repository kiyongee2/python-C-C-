//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main() {
//
//	string source = "cake.jpg";
//	string copied = "cake2.jpg";
//
//	ifstream fin(source, ios::binary);
//	if (!fin) {
//		cout << "파일을 열 수 없습니다.\n";
//		return -1;
//	}
//
//	ofstream fout(copied, ios::binary);
//	if (!fin) {
//		cout << "파일을 열 수 없습니다.\n";
//		return -1;
//	}
//
//	//버퍼에 저장
//	char buf[1024];
//
//	while (fin) {
//		fin.read(buf, sizeof(buf));
//		fout.write(buf, fin.gcount());
//	}
//
//	fin.close();
//	fout.close();
//
//	return 0;
//}
