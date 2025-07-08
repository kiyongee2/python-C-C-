//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//class Student {
//private:
//	string name;  //이름
//	int eng;      //영어 점수
//	int math;     //수학 점수
//	double avg;   //평균
//
//public:
//	//설정자(setter) 메서드
//	void setName(string name) { this->name = name; }
//	void setEng(int eng) {this->eng = eng;}
//	void setMath(int math) {this->math = math;}
//	 
//	//평균 계산
//	void calculateAvg() {
//		avg = (double)(eng + math) / 2;
//	}
//
//	//접근자(getter) 메서드
//	string getName() { return name; }
//	int getEng() { return eng; }
//	int getMath() { return math; }
//	double getAvg() { return avg; }
//};
//
//int main()
//{
//	ofstream fout("scorelist.txt");
//	Student students[3];
//
//	if (!fout) {
//		cerr << "Error: 파일을 열 수 없습니다.\n";
//		return 1;
//	}
//
//	//키보드 입력
//	for (int i = 0; i < 3; i++) {
//		string name;
//		int eng, math;
//
//		cout << i + 1 << "번째 학생의 이름: ";
//		getline(cin, name);
//		students[i].setName(name);
//
//		cout << "영어 점수 입력: ";
//		cin >> eng;
//		students[i].setEng(eng);
//
//		cout << "수학 점수 입력: ";
//		cin >> math;
//		students[i].setMath(math);
//
//		cin.ignore();  //개행문자 제거 - getline() 처리
//
//		students[i].calculateAvg(); //평균 계산
//	}
//
//	//파일에 쓰기
//	for (int i = 0; i < 3; i++) {
//		fout << students[i].getName() << " "
//			 << students[i].getEng() << " "
//			 << students[i].getMath() << " "
//			 << students[i].getAvg() << endl;
//	}
//
//	fout.close();
//
//	cout << "데이터가 성공적으로 저장되었습니다.\n";
//
//	return 0;
//}
//
