//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main() {
//
//    ofstream out("score.txt", ios::out | ios::binary); // ���̳ʸ� ���� ����
//
//    if (!out) {
//        cerr << "Error: ������ �� �� �����ϴ�.\n";
//        return 1;
//    }
//
//    string name;
//    int eng, math;
//
//    cout << "�̸� �Է�: ";
//    cin >> name;
//    cout << "�������� �Է�: ";
//    cin >> eng;
//    cout << "�������� �Է�: ";
//    cin >> math;
//
//    // ���Ͽ� ���� (ANSI�� ����)
//    out << name << " " << eng << " " << math << endl;
//
//    out.close();
//    cout << "�����Ͱ� ���������� ����Ǿ����ϴ�!" << endl;
//    return 0;
//}