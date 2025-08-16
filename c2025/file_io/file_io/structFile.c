//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////Person 구조체 
//typedef struct {
//    char name[20];  //이름
//    int age;        //나이
//} Person;
//
//int main() {
//
//    FILE* fp; //파일 포인터
//    Person p1 = { "이정후", 26 }; //초기화
//    Person p2;
//
//    // 1. 쓰기 모드로 열기
//    fp = fopen("person.txt", "w");
//    if (fp == NULL) {
//        printf("파일 열기 실패!\n");
//        return 1;
//    }
//
//    fprintf(fp, "%s %d\n", p1.name, p1.age); // 텍스트 형식으로 저장
//    fclose(fp);
//
//    // 2. 읽기 모드로 열기
//    fp = fopen("person.txt", "r");
//    if (fp == NULL) {
//        printf("파일 열기 실패!\n");
//        return 1;
//    }
//    fscanf(fp, "%s %d", p2.name, &p2.age); // 텍스트 형식으로 읽기
//    fclose(fp);
//
//    printf("이름: %s, 나이: %d\n", p2.name, p2.age);
//    return 0;
//}
