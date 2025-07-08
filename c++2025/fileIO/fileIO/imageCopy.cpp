#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string source = "cake.jpg";     //���� ����
	string copied = "copycake2.jpg"; //����� ����

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

	//���۷� �б�
	char buf[1024];
	/*while (!fin.eof()) {
		fin.read(buf, 1024); //�ִ� 1024 ����Ʈ�� �о� �迭�� ����
		int n = fin.gcount(); //���� ���� ����Ʈ ��
		fout.write(buf, n); //���� ����Ʈ ����ŭ ����
	}*/

	while (fin) {
		fin.read(buf, sizeof(buf));
		fout.write(buf, fin.gcount());
	}
	fin.close();
	fout.close();

	cout << "���� �Ϸ�!!\n";

	return 0;
}