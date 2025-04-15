#include <iostream>
#include <fstream>  //ofstream ���
#include <string>
using namespace std;

int main()
{
    ofstream f1("data.txt"); // ���� ���� ��ü ����
    int x = 1, y = 2;

    if (!f1) { 
        cerr << "������ �� �� �����ϴ�.\n";
        return 1; // ���� �ڵ� ��ȯ
    }

    // ���Ͽ� ����
    f1 << "Good Job!\n";
    f1 << x << " " << y << endl;
    
    f1.close();  // ���� �ݱ�
 
    //cout << "�����Ͱ� ���������� ����Ǿ����ϴ�!" << endl;

    ifstream fin("data.txt");
    if (fin.fail()) {
        cerr << "������ ã�� �� �����ϴ�.\n";
    }

    string str;
    while (!fin.eof()) {
        getline(fin, str);
        cout << str << endl;
    }
    /*while (getline(fin, str)) {
        cout << str << endl;
    }*/

    fin.close();

	return 0;
}

