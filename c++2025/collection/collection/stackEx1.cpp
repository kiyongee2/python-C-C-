//#include <iostream>
//#include <stack>
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
//	cout << stk.top() << endl; //2
//
//	stk.pop();
//	cout << stk.top() << endl; //1
//
//	stk.pop(); 
//
//	// 스택이 비어 있는 상태에서 pop() 호출 방지
//	if (!stk.empty()) {
//		stk.pop();
//	}
//	else {
//		cout << "스택이 비어 있어서 삭제 할 수 없습니다.\n";
//	}
//
//	//안전한 삭제 처리
//	while (!stk.empty()) {
//		cout << stk.top() << " ";
//		stk.pop();
//	}
//
//	return 0;
//}
