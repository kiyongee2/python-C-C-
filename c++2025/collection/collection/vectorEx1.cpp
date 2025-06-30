//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	//점수를 저장할 정수형 벡터 생성
//	vector<int> vec; 
//
//	//요소 저장
//	vec.push_back(80);
//	vec.push_back(75);
//	vec.push_back(90);
//
//	//인덱싱
//	cout << vec[1] << endl;  //75
//
//	//전체 조회
//	for (int i = 0; i < vec.size(); i++) {
//		cout << vec[0] << endl;
//	}
//	cout << "----------------------\n";
//
//	//반복자 설정
//	vector<int>::iterator it = vec.begin();
//
//	//인덱싱
//	cout << *it << endl;  //80, 포인터 사용
//	cout << *(it + 1) << endl;  //75
//	cout << *(it + 2) << endl;  //90
//	cout << "----------------------\n";
//
//	//반복자로 전체 조회
//	cout << *vec.begin() << endl;  //첫번째 요소
//	cout << *(vec.begin() + 1) << endl;  //두번째 요소
//	cout << *(vec.end() -1) << endl;  //마지막 요소
//	cout << "----------------------\n";
//
//	for (it = vec.begin(); it != vec.end(); it++) {
//		cout << *it << endl;
//	}
//	cout << "----------------------\n";
//
//	//요소 삭제
//	for (it = vec.begin(); it != vec.end(); it++) {
//		if (*it == 90) {
//			vec.erase(it);
//			break;
//		}
//	}
//
//	//범위 기반 for
//	for (auto v : vec) {
//		cout << v << endl;
//	}
//
//	return 0;
//}