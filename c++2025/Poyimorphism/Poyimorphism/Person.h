#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string name);

    virtual void greet();         // virtual
    virtual void displayInfo();   // virtual
    virtual ~Person();            // 가상 소멸자(필수)
};

#endif

