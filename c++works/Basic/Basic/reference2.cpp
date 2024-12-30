//#include <iostream>
//
//using namespace std;
//
//// 참조 리턴
//char& find(char s[], int index)
//{
//	return s[index];
//}
//
//int main()
//{
//	char name[] = "Mike";
//	cout << name << endl;
//
//	// find()가 리턴한 위치에 문자 'S' 저장
//	find(name, 0) = 'S';
//	cout << name << endl;
//
//	char& ref = find(name, 2);
//	ref = 't';
//	cout << name << endl;  
//
//	return 0;
//}