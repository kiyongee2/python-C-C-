//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//
//    string str = "Hello World";
//
//    //���ڿ��� ����
//    cout << str.length() << endl;  // 11
//    
//    //���ڿ� �ε���
//    cout << str.at(0) << endl;     // H
//    cout << str[6] << endl;        // W
//
//    string jumin = "030815-4567890";
//    char gender = jumin.at(7); //4
//
//    switch (gender) {
//    case '1': case '3':
//        cout << "����" << endl;
//        break;
//    case '2': case '4':
//        cout << "����" << endl;
//        break;
//    }
//    
//    // ���ڿ� �ڸ���(����)
//    string sub = str.substr(0, 5);  // "Hello"
//    cout << sub << endl;
//
//    // ��ü
//    str.replace(6, 5, "Korea");        
//    cout << str << endl;         // "Hello Korea"
//
//    // ã��
//    int pos = str.find("Korea");  //ã���� ��ġ ��ȯ 6
//    //int pos = str.find("Java"); //ã�� ���ϸ� -1
//    cout << pos << endl;
//
//    // ��
//    string a = "apple", b = "banana";
//    if (a.compare(b) < 0)
//        cout << "a�� b���� ����" << endl;
//    if (a.compare(b) == 0)
//        cout << "a�� b�� ���� ���ڿ���" << endl;
//
//    return 0;
//}
