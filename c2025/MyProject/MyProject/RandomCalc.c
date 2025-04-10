//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(int);
void showQuestion(int, int, int);

int main_randomNumber()
{
    //랜덤 곱하기
    //맞히면 정답, 틀리면 오답
    srand(time(NULL));
    int count = 0;  //맞힌 개수

    for (int i = 1; i <= 5; i++) {
        int n1 = getRandomNumber(i);
        int n2 = getRandomNumber(i);

        showQuestion(i, n1, n2);

        int answer = -1;
        scanf_s("%d", &answer);
        if (answer == -1)
        {
            printf("프로그램을 종료합니다.\n");
            exit(0);
        }
        else if (answer == n1 * n2)
        {
            //성공
            printf("정답!!\n");
            count++;
        }
        else {
            printf("오답!!\n");
        }
    }

    printf("당신은 5문제 중 %d문제를 맞혔습니다.\n", count);

    return 0;
}

int getRandomNumber(int level)
{
    return rand() % (level * 5) + 1;
}

void showQuestion(int level, int n1, int n2)
{
    printf("=====%d번째 문제=====", level);
    printf("%d x %d 는\n", n1, n2);
    printf("=====계산을 종료하세요.(종료: -1)>> ");
}