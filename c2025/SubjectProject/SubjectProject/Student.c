//������� ������
#include "Student.h"

void printInfo(Student* st) {
	printf("%d\t%s\t%d\t%d\t%d\t%.1f\n", 
		st->number, 
		st->name, 
		st->subject.kor,
		st->subject.math, 
		st->subject.eng, 
		st->subject.avg);
}

