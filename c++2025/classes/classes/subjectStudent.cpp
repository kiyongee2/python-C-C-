//#include <iostream>
//
//using namespace std;
//
//class Subject {
//private:
//	string subjectName;  //���� �̸�
//	int scorePoint;      //���� ����
//
//public:
//	//������
//	void setSubjectName(string subjectName) {
//		this->subjectName = subjectName;
//	}
//	//������
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
//	int studentId;      //�й�
//	string studentName; //�̸�
//	Subject korean;     //����
//	Subject math;       //����
//
//public:
//	//������
//	Student(int studentId, string studentName) {
//		this->studentId = studentId;
//		this->studentName = studentName;
//	}
//
//	//���� ���� ����
//	void setKoreanSubject(string name, int score) {
//		korean.setSubjectName(name);
//		korean.setScorePoint(score);
//	}
//
//	//���� ���� ����
//	void setMathSubject(string name, int score) {
//		math.setSubjectName(name);
//		math.setScorePoint(score);
//	}
//
//	//�л��� ����
//	void showInfo() {
//		cout << "�й�: " << studentId <<
//			"\n�̸�: " << studentName <<
//			"\n��������: " << korean.getScorePoint() <<
//			"\n��������: " << math.getScorePoint();
//		cout << "\n------------------------\n";
//	}
//};
//
//int main()
//{
//	Student lee(1001, "������");
//	lee.setKoreanSubject("����", 85);
//	lee.setMathSubject("����", 80);
//	lee.showInfo();
//
//	Student shin(1002, "������");
//	shin.setKoreanSubject("����", 90);
//	shin.setMathSubject("����", 85);
//	shin.showInfo();
//
//	return 0;
//}