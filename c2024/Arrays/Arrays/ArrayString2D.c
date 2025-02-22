//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	char greet[] = "hello";
//	int i, j;
//
//	//문자열로 출력
//	printf("%s\n", greet);
//
//	//문자로 출력
//	for (i = 0; greet[i] != NULL; i++)
//	{
//		printf("%c", greet[i]);
//	}
//
//	printf("\n=====================\n");
//
//	//words[단어의 개수][최대 문자의 수]
//	char words[3][10] = { 
//		"sun", 
//		"moon", 
//		"earth"
//	};
//
//	//요소 전체 조회(문자로 출력)
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; words[i][j] != NULL; j++)
//		{
//			printf("%c", words[i][j]);
//		}
//		printf("\n");
//	}
//
//	//printf("\n=====================\n");
//	//요소 전체 조회(문자열로 출력)
//
//	int size = sizeof(words) / sizeof(words[0]); //요소의 개수
//	printf("%d\n", size);
//
//	for (i = 0; i < size; i++)
//	{
//		printf("%s\n", words[i]);
//	}
//
//	return 0;
//}