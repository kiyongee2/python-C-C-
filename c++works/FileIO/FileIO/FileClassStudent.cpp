//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//class Student {
//private:
//    string name;  //�̸�
//    int eng;      //���� ����
//    int math;     //���� ����
//    double avg;   //���
//
//public:
//    // ������(setter) �޼����
//    void setName(string name) { this->name = name;}
//    void setEng(int eng) { this->eng = eng;}
//    void setMath(int math) { this->math = math;}
//
//    // ��� ��� �޼���
//    void calculateAvg() {
//        avg = (double)(eng + math) / 2; 
//    }
//
//    // ������(getter) �޼����
//    string getName() const { return name; }
//    int getEng() const { return eng; }
//    int getMath() const { return math; }
//    double getAvg() const { return avg; }
//};
//
//int main() {
//    ofstream out("scorelist.txt"); 
//    Student students[3];
//
//    if (!out) {
//        cerr << "Error: ������ �� �� �����ϴ�.\n";
//        return 1;
//    }
//
//    for (int i = 0; i < 3; i++) {
//        string name;
//        int eng, math;
//
//        cout << i + 1 << "��° �л��� �̸�: ";
//        cin >> name;
//        students[i].setName(name);
//
//        cout << "�������� �Է�: ";
//        cin >> eng;
//        students[i].setEng(eng);
//
//        cout << "�������� �Է�: ";
//        cin >> math;
//        students[i].setMath(math);
//
//        students[i].calculateAvg();  //��� ���
//    }
//
//    // ���Ͽ� ����
//    for (int i = 0; i < 3; i++) {
//        out << students[i].getName() << " "
//            << students[i].getEng() << " "
//            << students[i].getMath() << " "
//            << students[i].getAvg() << endl;
//    }
//
//    out.close();
//    cout << "�����Ͱ� ���������� ����Ǿ����ϴ�!" << endl;
//
//    system("pause");
//
//    return 0;
//}
