// MyClass.h
#ifndef MYCLASS_H // ��� ���� �ߺ� ���� ����
#define MYCLASS_H

class MyClass {
private:
    int value;

public:
    MyClass(); // ������
    ~MyClass(); // �Ҹ���

    void setValue(int val);
    int getValue();

};
#endif
