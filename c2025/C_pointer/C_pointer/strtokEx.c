//#define _CRT_SECURE_NO_WARNINGS    // strtok ���� ��� - ������ ���� ����
//#include <stdio.h>
//#include <string.h>    // strtok �Լ��� ����� ��� ����
//#include <stdlib.h>    // srand(), rand()
//#include <time.h>
//
//int main()
//{
//    char words[] = "ant bear chicken pig";
//    char* wordList[4]; // �и��� �ܾ� ����� �迭
//    int idxOfWord = 0; // �迭�� �ε���
//
//    char* ptr = strtok(words, " ");  //���鹮�ڷ� �����Ͽ� ptr�� �ּ� ����
//
//    while (ptr != NULL)
//    {
//        wordList[idxOfWord++] = ptr;
//        //���鹮�ڸ� �����Ѽ� ���� ���� �ڸ���
//        ptr = strtok(NULL, " ");  
//    }
//    //printf("%s\n", wordList[0]);  //ant
//
//    //�����ϰ� �����ϱ�
//    srand(time(NULL));
//
//    int rndIdx = rand() % idxOfWord;
//    printf("����: %s\n", wordList[rndIdx]); //����: pig
//
//    return 0;
//}
