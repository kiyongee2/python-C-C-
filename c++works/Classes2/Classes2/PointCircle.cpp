//#include <iostream>
//#define M_PI 3.141592
//using namespace std;
//
//// Point를 구조체에서 클래스로 변환
//class Point {
//private:
//    int x;
//    int y;
//
//public:
//    // 생성자: 초기화 목록 사용
//    Point(int x = 0, int y = 0) : x(x), y(y) {}
//
//    // getter 메서드
//    int getX() { return x; }
//    int getY() { return y; }
//
//    // 점 간 거리 계산 메서드 (선택적 추가 기능)
//    /*double distanceTo(const Point& other) const {
//        return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
//    }*/
//};
//
//class Circle {
//private:
//    Point center; // 중심점(이제 Point 클래스 사용)
//    int radius;   // 반지름
//
//public:
//    // 생성자: 초기화 목록 사용
//    Circle(int x, int y, int radius) : center( x, y ), radius(radius) {}
//
//    // 원의 넓이 계산
//    double getArea(){
//        return M_PI * radius * radius; // math.h의 M_PI 사용
//    }
//
//    // 원의 정보 출력
//    void showInfo(){
//        cout << "원의 중심은(" << center.getX() << ", " << center.getY()
//            << ")이고, 반지름은 " << radius << "입니다." << endl;
//    }
//};
//
//int main() {
//    Circle c1(2, 3, 5);  // 작은 원 생성
//    Circle c2(10, 10, 10); // 큰 원 생성
//
//    cout << "*************** 원의 정보 ***************\n";
//    c1.showInfo();
//    cout << "원의 넓이: " << c1.getArea() << endl;
//
//    c2.showInfo();
//    cout << "원의 넓이: " << c2.getArea() << endl;
//
//    // 추가 기능 사용 예시
//   /* cout << "두 원이 겹치는가? "
//         << (c1.isOverlapping(c2) ? "예" : "아니오") << endl;*/
//    
//    return 0;
//}