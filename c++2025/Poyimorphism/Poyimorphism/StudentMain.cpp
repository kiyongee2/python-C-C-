//#include <iostream>
//#include "Student.h"
//
//void introduce(Person* p) {
//    // 다형성: Student 인스턴스면 Student의 greet() 호출
//    p->greet();         
//    p->displayInfo();   
//}
//
//int main() {
//    //동적 인스턴스 생성
//    Person* p1 = new Person("이종범");
//    Student* s1 = new Student("이정후", 101);
//
//    cout << "[Person 객체]" << endl;
//    introduce(p1);
//
//    cout << "\n[Student 객체]" << endl;
//    introduce(s1);  // Person 포인터지만 실제는 Student 객체
//
//    delete p1; //메모리 반납
//    delete s1; 
//
//    return 0;
//}
//
//
