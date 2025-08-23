#include <iostream>
#include <string>
using namespace std;

int main() {

    string str = "Hello World";

    //���ڿ��� ����
    cout << str.length() << endl;  // 11
    
    //���ڿ� �ε���
    cout << str.at(0) << endl;     // H
    cout << str[6] << endl;        // W

    string jumin = "030815-4567890";
    char gender = jumin.at(7); //4

    switch (gender) {
    case '1': case '3':
        cout << "����" << endl;
        break;
    case '2': case '4':
        cout << "����" << endl;
        break;
    }
    
    // ���ڿ� �ڸ���(����)
    string sub1 = str.substr(0, 5);  
    string sub2 = str.substr(6);  
    cout << sub1 << endl; // "Hello"
    cout << sub2 << endl; // "World" - 6������ ������.

    // ��ü - replace(������ġ, �����ǰ���, �����ҹ���)
    str.replace(6, 5, "Korea");        
    cout << str << endl;         // "Hello Korea"

    // ã�� - find() : ù ������ �ε����� ��ȯ
    string subject = "C++ ���α׷���";
    int pos = subject.find("C++"); //0 - ù ������ �ε��� ��ȯ
    //int pos = subject.find("Python"); //ã�� ���ϸ� -1
    cout << pos << endl;  //0

    if (subject.find("���α׷���") != -1) {
        cout << "C++�� ���õ� �����̱���!" << endl;
    }
    else {
        cout << "C++�� ������ ���� �����̱���!" << endl;
    }

    return 0;
}
