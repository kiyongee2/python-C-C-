//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main()
//{
//	//여러 개의 정수를 저장할 벡터 생성
//	vector<int> vi;
//
//	//정수 추가
//	vi.push_back(1);
//	vi.push_back(2);
//	vi.push_back(3);
//
//	//리스트의 크기
//	cout << vi.size() << endl;
//
//	//요소 검색
//	cout << vi[0] << endl;
//
//	//2번 인덱스 값 수정
//	//vi[2] = 10;
//	vi.at(2) = 10;
//
//	//전체 조회
//	for (int i = 0; i < vi.size(); i++)
//	{
//		cout << vi[i] << " ";
//	}
//	cout << "\n=========================\n";
//
//	//여러 개의 문자열을 저장할 벡터 생성
//	vector<string> list;
//	string name;
//
//	//저장
//	list.push_back("jerry");
//	list.push_back("luna");
//	list.push_back("han");
//	list.push_back("elsa");
//
//	//리스트의 크기
//	cout << list.size() << endl;
//
//	for (int i = 0; i < list.size(); i++)
//	{
//		cout << list[i] << " ";
//	}
//	cout << "\n=========================\n";
//
//	//최대값 계산
//	name = list.at(0);  //최대값으로 설정
//	for (int i = 0; i < list.size(); i++)
//	{
//		if (list[i] > name)
//			name = list[i];
//	}
//	cout << "사전에서 가장 뒤에 나오는 이름은 " << name << endl;
//
//	return 0;
//}