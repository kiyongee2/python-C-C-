//#include <iostream>
//using namespace std;
//
////Student 구조체 정의
//struct Student {
//	string name;
//	int grade;
//	string address;
//};
//
//int main()
//{
//	//Student 클래스의 인스턴스 st1 생성
//	Student st1;  
//
//	//구조체는 멤버 변수가 public 이므로 접근 가능
//	st1.name = "이우주";
//	st1.grade = 3;
//	st1.address = "서울시 노원구 상계동";
//
//	cout << "이름: " << st1.name << endl;
//	cout << "학년: " << st1.grade<< endl;
//	cout << "주소: " << st1.address << endl;
//
//	//구조체 배열
//	cout << "========== 학생 명단 ==========\n";
//	Student students[3] = {
//		{"김지구", 1, "서울시 종로구"},
//		{"박화성", 2, "서울시 노원구"},
//		{"최목성", 3, "서울시 서대문구"},
//	};
//
//	for (int i = 0; i < 3; i++) {
//		cout << students[i].name << " 학생은" <<
//			students[i].grade << " 학년입니다.\n";
//	}
//
//	return 0;
//}
