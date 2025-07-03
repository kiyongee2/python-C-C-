//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> vec; //정수형 벡터 생성
//
//	//요소 저장
//	/*vec.push_back(80);
//	vec.push_back(75);
//	vec.push_back(90);*/
//
//	vec = { 80, 75, 90 };
//
//	//특정 요소 검색
//	cout << "첫 번째: " << vec.front() << endl;
//	cout << "마지막: " << vec.back() << endl;
//	cout << vec[0] << endl;  //80
//	cout << vec.at(1) << endl; //75
//
//	cout << "크기: " << vec.size() << endl;
//
//	//전체 조회
//	for (int i = 0; i < vec.size(); i++) {
//		cout << vec[i] << endl;
//	}
//	cout << "----------------------\n";
//
//	//반복자 설정
//	vector<int>::iterator it = vec.begin();
//
//	//인덱싱
//	cout << *it << endl;  //80
//	cout << *(it + 1) << endl;  //75
//	cout << *(it + 2) << endl;  //90
//	cout << "----------------------\n";
//
//	//반복자로 전체 조회
//	cout << *vec.begin() << endl;  //첫번째 요소
//	cout << *(vec.begin() + 1) << endl;  //두번째 요소
//	cout << *(vec.end() - 1) << endl;  //마지막 요소
//	cout << "----------------------\n";
//
//	for (it = vec.begin(); it != vec.end(); it++) {
//		cout << *it << endl;
//	}
//	cout << "----------------------\n";
//
//	//요소 수정
//	//vec[1] = 100;
//	vec.at(1) = 100;
//
//	//마지막 요소 삭제
//	vec.pop_back();
//
//	//특정 요소 삭제
//	/*for (it = vec.begin(); it != vec.end(); it++) {
//		if (*it == 90) {
//			vec.erase(it);
//			break;
//		}
//	}*/
//
//	//범위 기반 for
//	for (auto v : vec) {
//		cout << v << endl;
//	}
//
//	return 0;
//}