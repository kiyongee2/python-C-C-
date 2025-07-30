//#include <iostream>
//using namespace std;
//
//class Subject {
//private:
//    string subjectName;  // ���� �̸�
//    int scorePoint;      // ����
//
//public:
//    void setSubjectName(string subjectName) {
//        this->subjectName = subjectName;
//    }
//
//    string getSubjectName() {
//        return subjectName;
//    }
//
//    void setScorePoint(int scorePoint) {
//        this->scorePoint = scorePoint;
//    }
//
//    int getScorePoint() {
//        return scorePoint;
//    }
//};
//
//class Student2 {
//private:
//    int studentId;
//    string studentName;
//    Subject subjects[10];  // ���� �迭
//    int subjectCount = 0;  // ���� ��ϵ� ���� ��
//
//public:
//    Student2(int studentId, string studentName) {
//        this->studentId = studentId;
//        this->studentName = studentName;
//    }
//
//    void addSubject(string name, int score) {
//        if (subjectCount < 10) {
//            subjects[subjectCount].setSubjectName(name);
//            subjects[subjectCount].setScorePoint(score);
//            subjectCount++; //1����
//        }
//    }
//
//    void showInfo() {
//        cout << "�й�: " << studentId << "\n�̸�: " << studentName << endl;
//        for (int i = 0; i < subjectCount; i++) {
//            cout << subjects[i].getSubjectName()
//                << " ����: " << subjects[i].getScorePoint() << endl;
//        }
//    }
//};
//
//int main() {
//
//    Student2 lee(1001, "������");
//    lee.addSubject("����", 90);
//    lee.addSubject("����", 80);
//    lee.addSubject("����", 85);
//    lee.showInfo();
//
//    return 0;
//}
