//#include <iostream>
//#include <stack>
//#include <string>
//using namespace std;
//
//int main() {
//
//    stack<char> stk;
//
//    //요소 추가 : a - b - c
//    stk.push('a');
//    stk.push('b');
//    stk.push('c');
//
//    while (!stk.empty()) {
//        cout << stk.top() << " ";
//        stk.pop();  //요소 삭제 : c - b - a
//    }
//
//    //문자열 뒤집기
//    string str;
//    cout << "문자열 입력: ";
//    cin >> str;
//
//    stack<char> st; //문자를 저장할 스택 생성
//
//    for (char c : str) {
//        st.push(c);  //문자 1개 저장
//    }
//        
//    cout << "뒤집은 문자열: ";
//    while (!st.empty()) {
//        cout << st.top();
//        st.pop();
//    }
//    cout << endl;
//
//    return 0;
//}
