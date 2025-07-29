// MyClass.h
#ifndef MYCLASS_H // 헤더 파일 중복 포함 방지
#define MYCLASS_H

class MyClass {
private:
    int value;

public:
    MyClass(); // 생성자
    ~MyClass(); // 소멸자

    void setValue(int val);
    int getValue();

};
#endif
