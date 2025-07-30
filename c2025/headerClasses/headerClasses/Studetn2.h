#include <string>
#include "Subject.h"

class Student2 {
private:
	int studentId;
	string studentName;
	Subject subjects[10];

public:
	Student2(int studentId, string studentName);

	void addSubject(string name, int score);
};
