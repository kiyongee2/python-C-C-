#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    /* scanf() 
      공백(space) 또는 개행(\n)을 만나면 입력이 끝남.
      공백 포함문자를 입력받을 수 없음
    */
    /*char name[20];
    printf("이름을 입력하세요: ");
    scanf("%s", name);
    printf("입력된 이름: %s\n", name);*/

    /* fgets()
    * 공백을 포함한 문자열 입력 가능
      엔터(\n)까지 포함하여 저장됨
    */
    /*char message[30];
    printf("문장을 입력하세요: ");
    fgets(message, sizeof(message), stdin);
    printf("입력된 문장: %s", message);*/

    /*char paragraph[200];
    printf("여러 줄의 문장을 입력하세요 :\n");
    while (fgets(paragraph, sizeof(paragraph), stdin) != NULL) {
        printf("입력된 문장: %s", paragraph);
    }*/

    char name[20];
    int age;

    printf("이름을 입력하세요: ");
    scanf("%s", name);

    getchar();
    //while (getchar() != '\n');  // 입력 버퍼 비우기

    printf("나이를 입력하세요: ");
    scanf("%d", &age);

    printf("이름: %s, 나이: %d\n", name, age);

    return 0;
}