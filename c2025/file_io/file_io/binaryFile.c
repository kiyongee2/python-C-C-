//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//typedef struct {
//    char name[20];
//    int age;
//} Person;
//
//int main() {
//    FILE* fp;
//    Person p1 = { "이정후", 26 };
//    Person p2;
//
//    // 1. 쓰기 모드로 열기 (바이너리)
//    fp = fopen("person.dat", "wb");
//    if (fp == NULL) {
//        printf("파일 열기 실패!\n");
//        return 1;
//    }
//
//    fwrite(&p1, sizeof(Person), 1, fp); // 구조체 그대로 저장
//    fclose(fp);
//
//    // 2. 읽기 모드로 열기 (바이너리)
//    fp = fopen("person.dat", "rb");
//    if (fp == NULL) {
//        printf("파일 열기 실패!\n");
//        return 1;
//    }
//    fread(&p2, sizeof(Person), 1, fp); // 구조체 그대로 읽기
//    fclose(fp);
//
//    printf("읽은 데이터 → 이름: %s, 나이: %d\n", p2.name, p2.age);
//    return 0;
//}
