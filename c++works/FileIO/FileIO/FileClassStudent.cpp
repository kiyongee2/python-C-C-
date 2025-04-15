//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//class Student {
//private:
//    string name;  //이름
//    int eng;      //영어 점수
//    int math;     //수학 점수
//    double avg;   //평균
//
//public:
//    // 설정자(setter) 메서드들
//    void setName(string name) { this->name = name;}
//    void setEng(int eng) { this->eng = eng;}
//    void setMath(int math) { this->math = math;}
//
//    // 평균 계산 메서드
//    void calculateAvg() {
//        avg = (double)(eng + math) / 2; 
//    }
//
//    // 접근자(getter) 메서드들
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
//        cerr << "Error: 파일을 열 수 없습니다.\n";
//        return 1;
//    }
//
//    for (int i = 0; i < 3; i++) {
//        string name;
//        int eng, math;
//
//        cout << i + 1 << "번째 학생의 이름: ";
//        cin >> name;
//        students[i].setName(name);
//
//        cout << "영어점수 입력: ";
//        cin >> eng;
//        students[i].setEng(eng);
//
//        cout << "수학점수 입력: ";
//        cin >> math;
//        students[i].setMath(math);
//
//        students[i].calculateAvg();  //평균 계산
//    }
//
//    // 파일에 쓰기
//    for (int i = 0; i < 3; i++) {
//        out << students[i].getName() << " "
//            << students[i].getEng() << " "
//            << students[i].getMath() << " "
//            << students[i].getAvg() << endl;
//    }
//
//    out.close();
//    cout << "데이터가 성공적으로 저장되었습니다!" << endl;
//
//    system("pause");
//
//    return 0;
//}
