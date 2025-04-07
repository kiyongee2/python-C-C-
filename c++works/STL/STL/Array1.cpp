#include <iostream>
#include <array>  //array �����̳� ���
using namespace std;

int main()
{
	//ũ�Ⱑ 5�� ������ array ����
	array<int, 5> myArray;

	//�迭 �ʱ�ȭ
	myArray = { 1, 2, 3, 4, 5 };

	//����� ���ÿ� �ʱ�ȭ
	//array<int, 5> myArray{ 1, 2, 3, 4, 5 };

	//�迭�� ũ��
	cout << "�迭 ũ��: " << myArray.size() << endl;

	cout << "�迭 ���: ";
	for (int i = 0; i < myArray.size(); i++) {
		cout << myArray[i] << " ";
	}
	cout << endl;

	//�迭�� ù ��° ��� ���
	cout << "ù ��° ���: " << myArray[0] << endl;

	//�迭�� �� ��° ��� ����
	myArray[1] = 10;

	cout << "����� �迭: ";
	for (int& element : myArray) {
		cout << element << " ";
	}
	cout << endl;

	return 0;
}
