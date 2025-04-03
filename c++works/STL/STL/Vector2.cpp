//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> vec;  //정수형 벡터 생성
//
//	//요소 저장
//	vec.push_back(0);
//	vec.push_back(1);
//	vec.push_back(2);
//
//	cout << "***** iterator(반복자) 사용 *****\n";
//	vector<int>::iterator it = vec.begin();
//
//	/*cout << *it << endl;  //vec에 저장된 원소 출력
//	cout << *(it + 1) << endl;  
//	cout << *(it + 2) << endl;  */
//
//	for (it = vec.begin(); it != vec.end(); it++)
//	cout << *it << " ";
//	cout << endl;
//
//	//요소 삽입
//	vec.insert(vec.begin() + 2, 20); //vec[2] 앞에 20 추가
//
//	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//
//	//요소 삭제
//	vec.erase(vec.begin() + 1); //vec[1] 제거
//
//	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//
//	return 0;
//}