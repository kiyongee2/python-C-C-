//#include <iostream>
//#include <stack>
//#include <string>
//using namespace std;
//
//int main() {
//
//    stack<char> stk;
//
//    //��� �߰� : a - b - c
//    stk.push('a');
//    stk.push('b');
//    stk.push('c');
//
//    while (!stk.empty()) {
//        cout << stk.top() << " ";
//        stk.pop();  //��� ���� : c - b - a
//    }
//
//    //���ڿ� ������
//    string str;
//    cout << "���ڿ� �Է�: ";
//    cin >> str;
//
//    stack<char> st; //���ڸ� ������ ���� ����
//
//    for (char c : str) {
//        st.push(c);  //���� 1�� ����
//    }
//        
//    cout << "������ ���ڿ�: ";
//    while (!st.empty()) {
//        cout << st.top();
//        st.pop();
//    }
//    cout << endl;
//
//    return 0;
//}
