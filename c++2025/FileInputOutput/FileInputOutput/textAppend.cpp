//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main() {
//
//	int sid; //�й�
//	string name, dept;  //�̸�, �а�
//
//	//����� �Է�
//	cout << "�й� �Է�(����)>> ";
//	cin >> sid;
//
//	cin.ignore();  //���ۿ� ���� ���๮��('\n') ����
//
//	cout << "�̸� �Է�>> ";
//	getline(cin, name);
//
//	cout << "�а� �Է�>> ";
//	getline(cin, dept);
//
//	//���� ����(�߰� ���� ��� - append)
//	ofstream fout("student.txt", ios::app);
//	if (!fout) {
//		cout << "������ �� �� �����ϴ�.\n";
//		return -1;
//	}
//
//	//���� ����
//	fout << "�й�: " << sid << endl;
//	fout << "�̸�: " << name << endl;
//	fout << "�а�: " << dept << endl;
//
//	fout.close();
//
//	return 0;
//}