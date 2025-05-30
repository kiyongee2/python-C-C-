#define _CRT_SECURE_NO_WARNINGS    // strtok 보안 경고 - 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strtok 함수가 선언된 헤더 파일
#include <stdlib.h>    // srand(), rand()
#include <time.h>

#define MAX_WORDS 10  //최대 단어 개수
int main()
{
    char words[] = "ant bear chicken pig";
    char* wordList[MAX_WORDS]; // 분리된 단어 저장용 배열
    int idxOfWord = 0; // 배열의 인덱스

    // 첫 번째 단어 분리
    char* ptr = strtok(words, " ");
    printf("첫 번째 단어: %s\n", ptr);   //공백문자로 구분하여 ptr에 주소 저장

    ptr = strtok(NULL, " ");
    printf("두 번째 단어: %s\n", ptr); 

    while (ptr != NULL && idxOfWord < MAX_WORDS)
    {
        wordList[idxOfWord++] = ptr;
        //공백문자를 가리켜서 다음 문자 자르기
        ptr = strtok(NULL, " ");  
    }
    //printf("%s\n", wordList[0]);  //ant

    //랜덤하게 추출하기
    srand(time(NULL));

    int rndIdx = rand() % idxOfWord;
    printf("동물: %s\n", wordList[rndIdx]); //동물: pig

    return 0;
}
