//#include <iostream>
//using namespace std;
//
//class Math {
//public:
//    template <typename T>
//    static T abs(T x) {
//        return (x < 0) ? -x : x;
//    }
//
//    template <typename T>
//    static T max(T x, T y) {
//        return (x > y) ? x : y;
//    }
//
//    template <typename T>
//    static T min(T x, T y) {
//        return (x < y) ? x : y;
//    }
//};
//
//int main()
//{
//    // 정적 함수 사용
//    cout << Math::abs(-100) << endl;   // 100
//    cout << Math::abs(-3.5) << endl;   // 3.5, double 타입 지원
//
//    cout << Math::max(10, 20) << endl;    // 20
//    cout << Math::min(5.4, 7.2) << endl;  // 5.4
//    
//    return 0;
//}
//
