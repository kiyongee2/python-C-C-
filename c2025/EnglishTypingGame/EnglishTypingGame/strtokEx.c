#define _CRT_SECURE_NO_WARNINGS    // strtok ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>    // strtok �Լ��� ����� ��� ����

int main()
{
    char words[] = "ant bear chicken cow dog elephant monkey lion tiger horse snake"; 

    char* ptr = strtok(words, " ");      // " " ���� ���ڸ� �������� ���ڿ��� �ڸ�, ������ ��ȯ

    while (ptr != '\0')               // �ڸ� ���ڿ��� ������ ���� ������ �ݺ�
    {
        printf("%s\n", ptr);          // �ڸ� ���ڿ� ���
        ptr = strtok('\0', " ");      // ���� ���ڿ��� �߶� �����͸� ��ȯ
    }

    return 0;
}