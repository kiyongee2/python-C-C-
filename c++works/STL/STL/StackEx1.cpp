#include <iostream>
#include <stack> //stack ���̺귯�� ����
using namespace std;

int main()
{
	//������ stack �����̳� ����
	stack<int> myStack; 

	//���ÿ� ������ �߰�
	myStack.push(1);
	myStack.push(2);
	myStack.push(3);

	//������ ũ�� Ȯ��
	cout << "������ ũ��: " << myStack.size() << endl;

	//������ �� ���� �� Ȯ��
	cout << "�� �� ����: " << myStack.top() << endl;

	//���ÿ��� ������ ����(�� �� ������ ������)
	myStack.pop();
	cout << "�� �� ����: " << myStack.top() << endl;
	
	//������ ������� Ȯ��
	if (myStack.empty()) {
		cout << "������ ������ϴ�." << endl;
	}
	else {
		cout << "������ ������� �ʽ��ϴ�." << endl;
	}

	return 0;
}
