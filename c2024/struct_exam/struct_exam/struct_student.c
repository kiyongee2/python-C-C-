#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 구조체 정의
typedef struct Student {
    int id;              // 학번
    char name[50];       // 이름
    float grade;         // 성적
}Student;

// 함수 선언
void printStudent(Student student);
Student createStudent(int id, const char* name, float grade);

int main() {
    // 구조체 변수 생성 및 초기화 함수 호출
    Student s1 = createStudent(1, "홍길동", 4.2);
    Student s2 = createStudent(2, "김철수", 3.8);

    // 학생 정보 출력
    printf("학생 1 정보:\n");
    printStudent(s1);

    printf("\n학생 2 정보:\n");
    printStudent(s2);

    return 0;
}

// 학생 정보를 출력하는 함수
void printStudent(Student student) {
    printf("학번: %d\n", student.id);
    printf("이름: %s\n", student.name);
    printf("성적: %.2f\n", student.grade);
}

// 학생 정보를 생성하는 함수
Student createStudent(int id, const char* name, float grade) {
    Student newStudent;
    newStudent.id = id;
    strcpy(newStudent.name, name); // 문자열 복사
    newStudent.grade = grade;
    return newStudent;
}
