//#include <iostream>
//
//using namespace std;
//
//class Subject {
//private:
//	string subjectName;  //과목 이름
//	int scorePoint;      //과목 점수
//
//public:
//	//설정자
//	void setSubjectName(string subjectName) {
//		this->subjectName = subjectName;
//	}
//	//접근자
//	string getSubjectName() { return subjectName; }
//
//	void setScorePoint(int scorePoint) {
//		this->scorePoint = scorePoint;
//	}
//	int getScorePoint() { return scorePoint; }
//};
//
//class Student {
//private:
//	int studentId;      //학번
//	string studentName; //이름
//	Subject korean;     //국어
//	Subject math;       //수학
//
//public:
//	//생성자
//	Student(int studentId, string studentName) {
//		this->studentId = studentId;
//		this->studentName = studentName;
//	}
//
//	//국어 점수 설정
//	void setKoreanSubject(string name, int score) {
//		korean.setSubjectName(name);
//		korean.setScorePoint(score);
//	}
//
//	//수학 점수 설정
//	void setMathSubject(string name, int score) {
//		math.setSubjectName(name);
//		math.setScorePoint(score);
//	}
//
//	//학생의 정보
//	void showInfo() {
//		cout << "학번: " << studentId <<
//			"\n이름: " << studentName <<
//			"\n국어점수: " << korean.getScorePoint() <<
//			"\n수학점수: " << math.getScorePoint();
//		cout << "\n------------------------\n";
//	}
//};
//
//int main()
//{
//	Student lee(1001, "이정우");
//	lee.setKoreanSubject("국어", 85);
//	lee.setMathSubject("수학", 80);
//	lee.showInfo();
//
//	Student shin(1002, "신유진");
//	shin.setKoreanSubject("국어", 90);
//	shin.setMathSubject("수학", 85);
//	shin.showInfo();
//
//	return 0;
//}