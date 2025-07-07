#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	const char* source = "cake.jpg";
	const char* copied = "copycake3.jpg";

	//소스파일 열기(binary 모드)
	ifstream fin(source, ios::binary);
	if (!fin) {
		cerr << "파일을 열 수 없습니다.\n";
		return 1;
	}

	//복사파일 열기
	ofstream fout(copied, ios::binary);
	if (!fout) {
		cerr << "파일을 열 수 없습니다.\n";
		return 1;
	}

	/*int c;
	while ((c = fin.get()) != EOF) { //1바이트씩 읽어서
		fout.put(c); //1바이트 씩 쓰기
	}*/

	//버퍼로 구현
	char buf[1024];
	/*while (!fin.eof()) {
		fin.read(buf, 1024); //최대 1024 바이트를 읽어 배열에 저장
		int n = fin.gcount(); //실제 읽은 바이트 수
		fout.write(buf, n); //읽은 바이트 수만큼 쓰기
	}*/

	while (fin) {
		fin.read(buf, sizeof(buf));
		int n = fin.gcount();
		if (n > 0)
			fout.write(buf, n);
	}

	fin.close();
	fout.close();

	cout << "복사 완료!!\n";

	return 0;
}