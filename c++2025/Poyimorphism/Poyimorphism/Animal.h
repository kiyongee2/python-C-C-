#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;

class Animal {
public:
    virtual ~Animal();        // ���� �Ҹ���
    void breathe();           // ���� ���
    virtual void cry() = 0;   // ���� ���� �Լ�
};

#endif

