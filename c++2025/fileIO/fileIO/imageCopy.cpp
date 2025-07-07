#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	const char* source = "cake.jpg";
	const char* copied = "copycake3.jpg";

	//�ҽ����� ����(binary ���)
	ifstream fin(source, ios::binary);
	if (!fin) {
		cerr << "������ �� �� �����ϴ�.\n";
		return 1;
	}

	//�������� ����
	ofstream fout(copied, ios::binary);
	if (!fout) {
		cerr << "������ �� �� �����ϴ�.\n";
		return 1;
	}

	/*int c;
	while ((c = fin.get()) != EOF) { //1����Ʈ�� �о
		fout.put(c); //1����Ʈ �� ����
	}*/

	//���۷� ����
	char buf[1024];
	/*while (!fin.eof()) {
		fin.read(buf, 1024); //�ִ� 1024 ����Ʈ�� �о� �迭�� ����
		int n = fin.gcount(); //���� ���� ����Ʈ ��
		fout.write(buf, n); //���� ����Ʈ ����ŭ ����
	}*/

	while (fin) {
		fin.read(buf, sizeof(buf));
		int n = fin.gcount();
		if (n > 0)
			fout.write(buf, n);
	}

	fin.close();
	fout.close();

	cout << "���� �Ϸ�!!\n";

	return 0;
}