//#include <stdio.h>
//#define MAX_LEN 4
//
//int main()
//{
//	int scores[MAX_LEN];
//	int idxOfScores = 0;
//
//	while (idxOfScores < MAX_LEN) {
//		printf("점수 입력: ");
//		if (scanf_s("%d", &scores[idxOfScores]) == 1) 
//		{
//			idxOfScores++;
//		}
//		else {
//			puts("잘못된 입력입니다! 숫자를 입력하세요.");
//			while (getchar() != '\n'); // 입력 버퍼 비우기
//			continue;
//		}
//	}
//	puts("더 이상 추가할 수 없음!");
//
//
//	for (int i = 0; i < idxOfScores; i++)
//	{
//		printf("%-4d", scores[i]);
//	}
//
//	return 0;
//}