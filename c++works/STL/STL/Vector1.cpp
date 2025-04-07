//#include <iostream>
//#include <vector>  //vector 컨테이너 사용
//#include <string>
//using namespace std;
//
//int main()
//{
//	//여러 개의 정수를 저장할 벡터 생성
//	vector<int> vec;
//
//	//정수 추가
//	vec.push_back(1);
//	vec.push_back(2);
//	vec.push_back(3);
//
//	//리스트의 크기
//	cout << vec.size() << endl;
//
//	//요소 검색
//	cout << vec[0] << endl;
//
//	//2번 인덱스 값 수정
//	//vec[2] = 10;
//	vec.at(2) = 10;
//
//	//전체 조회
//	for (int i = 0; i < vec.size(); i++)
//	{
//		cout << vec[i] << " ";
//	}
//	cout << "\n========================================\n";
//
//	//여러 개의 문자열을 저장할 벡터 생성
//	vector<string> list;
//	string name1, name2;
//
//	//저장
//	list.push_back("jerry");
//	list.push_back("luna");
//	list.push_back("hangang");
//	list.push_back("elsa");
//
//	//리스트의 크기
//	cout << list.size() << endl;
//
//	for (int i = 0; i < list.size(); i++)
//	{
//		cout << list[i] << " ";
//	}
//	cout << "\n========================================\n";
//
//	//최대값 계산
//	name1 = list.at(0);  //최대값으로 설정
//	for (int i = 0; i < list.size(); i++)
//	{
//		if (list[i] > name1)
//			name1 = list[i];
//	}
//	cout << "사전에서 가장 뒤에 나오는 이름은 " << name1 << endl;
//	cout << "========================================\n";
//
//	//최소값 계산
//	name2 = list.at(0);
//	for (int i = 0; i < list.size(); i++) {
//		if (list[i] < name2)
//			name2 = list[i];
//	}
//	cout << "사전에서 가장 앞에 나오는 이름은 " << name2 << endl;
//	cout << "========================================\n";
//
//	return 0;
//}