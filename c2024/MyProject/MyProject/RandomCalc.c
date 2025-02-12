//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(int);
void showQuestion(int, int, int);

int main_randomNumber()
{
    //���� ���ϱ�
    //������ ����, Ʋ���� ����
    srand(time(NULL));
    int count = 0;  //���� ����

    for (int i = 1; i <= 5; i++) {
        int n1 = getRandomNumber(i);
        int n2 = getRandomNumber(i);

        showQuestion(i, n1, n2);

        int answer = -1;
        scanf_s("%d", &answer);
        if (answer == -1)
        {
            printf("���α׷��� �����մϴ�.\n");
            exit(0);
        }
        else if (answer == n1 * n2)
        {
            //����
            printf("����!!\n");
            count++;
        }
        else {
            printf("����!!\n");
        }
    }

    printf("����� 5���� �� %d������ �������ϴ�.\n", count);

    return 0;
}

int getRandomNumber(int level)
{
    return rand() % (level * 5) + 1;
}

void showQuestion(int level, int n1, int n2)
{
    printf("=====%d��° ����=====", level);
    printf("%d x %d ��\n", n1, n2);
    printf("=====����� �����ϼ���.(����: -1)>> ");
}