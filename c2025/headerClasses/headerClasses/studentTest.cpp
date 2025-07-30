//#include <iostream>
//using namespace std;
//
//class Subject {
//private:
//    string subjectName;  // 과목 이름
//    int scorePoint;      // 점수
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
//    Subject subjects[10];  // 과목 배열
//    int subjectCount = 0;  // 현재 등록된 과목 수
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
//            subjectCount++; //1증가
//        }
//    }
//
//    void showInfo() {
//        cout << "학번: " << studentId << "\n이름: " << studentName << endl;
//        for (int i = 0; i < subjectCount; i++) {
//            cout << subjects[i].getSubjectName()
//                << " 점수: " << subjects[i].getScorePoint() << endl;
//        }
//    }
//};
//
//int main() {
//
//    Student2 lee(1001, "이정우");
//    lee.addSubject("국어", 90);
//    lee.addSubject("수학", 80);
//    lee.addSubject("영어", 85);
//    lee.showInfo();
//
//    return 0;
//}
