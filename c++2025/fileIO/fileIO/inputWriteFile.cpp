//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int sid;  //�й�
//	string name, dept; //�̸�, �а�
//	
//	//Ű���� �Է�
//	cout << "�й� �Է�(����)>> ";
//	cin >> sid;
//	cin.ignore();  //���ۿ� ���� ����('\n') ����
//
//	cout << "�̸� �Է�>> ";
//	//cin >> name;
//	getline(cin, name); //���� ���� �Է�
//
//	cout << "�а� �Է�>> ";
//	getline(cin, dept);
//	
//	//���� ����(�߰� ��� - append)
//	ofstream fout("student.txt", ios::app);
//	if (!fout) {
//		cerr << "������ �� �� �����ϴ�.\n";
//		return 1; 
//	}
//
//	//���� ����
//	fout << "�й�: " << sid << endl;
//	fout << "�̸�: " << name << endl;
//	fout << "�а�: " << dept << endl;
//
//	fout.close();
//
//	cout << "���� ���� �Ϸ�!!\n";
//
//	return 0;
//}