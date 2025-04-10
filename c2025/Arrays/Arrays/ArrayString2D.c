//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	//1차원 배열 - 문자열
//	char greet[] = "hello";
//	int i, j;
//
//	printf("%s\n", greet);
//
//	//2차원 배열 - words[단어의 개수][최대 문자의 수]
//	char words[3][10] = { 
//		"sun", 
//		"moon", 
//		"earth"
//	};
//	int i, j;
//
//	//특정 단어 조회
//	printf("%s\n", words[0]);
//	printf("%s\n", words[1]);
//	printf("%s\n", words[2]);
//
//	printf("\n=====================\n");
//
//	//요소 전체 조회(문자열로 출력)
//	int size = sizeof(words) / sizeof(words[0]); //요소의 개수
//
//	for (i = 0; i < size; i++)
//	{
//		printf("%s\n", words[i]);
//	}
//
//	//요소 전체 조회(문자로 출력)
//	for (i = 0; i < size; i++)
//	{
//		for (j = 0; words[i][j] != NULL; j++)
//		{
//			printf("%c", words[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("\n=====================\n");
//
//	//문자열 포인터로 단어 저장하기
//	char* animals[] = {"ant", "bear", "chicken", "deer", "elephant"};
//	int len = sizeof(words) / sizeof(words[0]);
//
//	//특정 단어 접근
//	/*printf("%s\n", animals[0]);
//	printf("%s\n", animals[2]);*/
//
//	//전체 조회
//	for (int i = 0; i < len; i++)
//	{
//		printf("%s\n", animals[i]);
//	}
//
//	return 0;
//}