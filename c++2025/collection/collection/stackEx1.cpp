//#include <iostream>
//#include <stack> //stack 헤더 파일 추가
//using namespace std;
//
//int main()
//{
//	stack<int> stk; //정수를 저장할 stack 컨테이너 생성
//
//	//요소 저장 (1 - 2 - 3)
//	stk.push(1);
//	stk.push(2);
//	stk.push(3);
//
//	//스택의 크기
//	cout << "스택 크기: " << stk.size() << endl; //3
//
//	//요소에 직접 접근할 수 없음
//	//cout << stk[1] << endl;
//
//	//스택의 맨 위 요소
//	cout << stk.top() << endl;  //3
//
//	//스택에서 데이터 삭제(3 - 2 - 1)
//	stk.pop(); 
//
//	cout << stk.top() << endl; //2
//
//	//안전한 삭제 처리
//	/*while (!stk.empty()) {
//		cout << stk.top() << " ";
//		stk.pop();
//	}*/
//
//	return 0;
//}
