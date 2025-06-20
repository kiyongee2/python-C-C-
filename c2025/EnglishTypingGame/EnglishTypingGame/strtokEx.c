#define _CRT_SECURE_NO_WARNINGS    // strtok 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strtok 함수가 선언된 헤더 파일

int main()
{
    char words[] = "ant bear chicken cow dog elephant monkey lion tiger horse snake"; 

    char* ptr = strtok(words, " ");      // " " 공백 문자를 기준으로 문자열을 자름, 포인터 반환

    while (ptr != '\0')               // 자른 문자열이 나오지 않을 때까지 반복
    {
        printf("%s\n", ptr);          // 자른 문자열 출력
        ptr = strtok('\0', " ");      // 다음 문자열을 잘라서 포인터를 반환
    }

    return 0;
}