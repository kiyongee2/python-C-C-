#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;

class Animal {
public:
    virtual ~Animal();        // 가상 소멸자
    void breathe();           // 공통 기능
    virtual void cry() = 0;   // 순수 가상 함수
};

#endif

