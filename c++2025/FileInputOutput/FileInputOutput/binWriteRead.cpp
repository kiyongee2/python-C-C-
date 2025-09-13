//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main() {
//	//바이너리 모드로 파일 열기
//	ofstream fout("myData.bin", ios::binary);
//	if (!fout) {
//		cout << "파일을 열 수 없습니다.\n";
//		return -1;
//	}
//
//	int num = 123;
//
//	//파일 쓰기
//	//&num은 시작 주소
//	//문자형 포인터로 형변환 - (char*)
//	fout.write((char*)&num, sizeof(num));
//	fout.close();
//
//	//바이너리 모드로 파일 열기
//	ifstream fin("myData.bin", ios::binary);
//	if (!fin) {
//		cout << "파일을 열 수 없습니다.\n";
//		return -1;
//	}
//
//	//파일 읽기
//	int readNum;
//	fin.read((char*)&readNum, sizeof(readNum));
//
//	//출력
//	cout << readNum << endl;
//
//	fin.close();
//	return 0;
//}
