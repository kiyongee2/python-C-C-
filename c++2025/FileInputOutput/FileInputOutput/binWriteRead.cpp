//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main() {
//	//���̳ʸ� ���� ���� ����
//	ofstream fout("myData.bin", ios::binary);
//	if (!fout) {
//		cout << "������ �� �� �����ϴ�.\n";
//		return -1;
//	}
//
//	int num = 123;
//
//	//���� ����
//	//&num�� ���� �ּ�
//	//������ �����ͷ� ����ȯ - (char*)
//	fout.write((char*)&num, sizeof(num));
//	fout.close();
//
//	//���̳ʸ� ���� ���� ����
//	ifstream fin("myData.bin", ios::binary);
//	if (!fin) {
//		cout << "������ �� �� �����ϴ�.\n";
//		return -1;
//	}
//
//	//���� �б�
//	int readNum;
//	fin.read((char*)&readNum, sizeof(readNum));
//
//	//���
//	cout << readNum << endl;
//
//	fin.close();
//	return 0;
//}
