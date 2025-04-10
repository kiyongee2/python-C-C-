#include <stdio.h>
#include <stdlib.h>

int main_CharArray() {

    // 2차원 배열
    char carts[4][10] = { "coffee", "potato", "egg", "beer"};

    for (int i = 0; i < 4; i++) {
        printf("%s\n", carts[i]);
    }

    // 포인터 배열
    char* carts2[] = { "coffee", "potato", "egg", "beer" };
    for (int i = 0; i < 4; i++) {
        printf("%s\n", carts2[i]);
    }

    // 동적 할당
    char* fruits[3];  // 포인터 배열 선언

    // 동적 할당 후 문자열 저장
    fruits[0] = malloc(strlen("Apple") + 1);
    fruits[1] = malloc(strlen("Banana") + 1);
    fruits[2] = malloc(strlen("Cherry") + 1);

    strcpy(fruits[0], "Apple");
    strcpy(fruits[1], "Banana");
    strcpy(fruits[2], "Cherry");

    for (int i = 0; i < 3; i++) {
        printf("%s\n", fruits[i]);
        free(fruits[i]);  // 메모리 해제
    }
    return 0;
}
