#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int eng, math;
    double avg;
};

int main() {

    ofstream out("scorelist.txt"); // ���̳ʸ� ���� ����
    Student std[3];

    if (!out) {
        cerr << "Error: ������ �� �� �����ϴ�.\n";
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        cout << i + 1 << "��° �л��� �̸�: ";
        cin >> std[i].name;
        cout << "�������� �Է�: ";
        cin >> std[i].eng;
        cout << "�������� �Է�: ";
        cin >> std[i].math;
        std[i].avg = (std[i].eng + std[i].math) / 2.0;
    }

    // ���Ͽ� ���� (ANSI�� ����)
    for (int i = 0; i < 3; i++) {
        out << std[i].name << " " << std[i].eng << " " << 
            std[i].math << " " << std[i].avg << endl;
    }
    
    out.close();

    cout << "�����Ͱ� ���������� ����Ǿ����ϴ�!" << endl;

    return 0;
}