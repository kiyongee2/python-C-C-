//#include <iostream>
//using namespace std;
//
//class Animal {
//public:
//	//Animal() {}  //�⺻ ������
//
//	//�ݵ�� virtual�� �Ҹ��� �����
//	//�Ҹ��� ������ delete�ÿ� �޸� ���� ���� �߻���
//	virtual ~Animal() {}
//
//	void breathe() {
//		cout << "���� ���ϴ�.\n";
//	}
//	virtual void cry() = 0; //���� ���� �Լ�
//	//virtual void cry() {}
//};
//
//class Cat : public Animal {
//public:
//	void cry() override{  //�Լ� ������
//		cout << "��~ ��!\n";
//	}
//
//	~Cat() { cout << "Cat �Ҹ��� ȣ���\n"; }
//};
//
//class Dog : public Animal {
//public:
//	void cry() override{
//		cout << "��~ ��~\n";
//	}
//
//	~Dog() { cout << "Dog �Ҹ��� ȣ���\n"; }
//};
//
//int main()
//{
//	//������ - �θ������� �ν��Ͻ� ����(�ڵ� ����ȯ)
//	Animal* cat = new Cat;
//	Animal* dog = new Dog;
//
//	cat->breathe();
//	cat->cry();
//
//	dog->breathe();
//	dog->cry();
//
//	delete cat;
//	delete dog;
//
//	return 0;
//}