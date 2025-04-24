//#include <stdio.h>
//
//int main()
//{
//	int arr[5];
//	int min = 999;
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d번째의 수 입력: ", i + 1);
//		//scanf_s("%d", &arr[i]);
//
//		if (scanf_s("%d", &arr[i]) != 1) {
//			puts("잘못된 입력입니다! 숫자를 입력하세요.");
//			while (getchar() != '\n'); //입력 버퍼 비우기 
//			i--; //이전 인덱스로 돌아감
//			continue;
//		}
//
//		//최소값 계산
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	printf("최소값은 %d\n", min);
//
//	return 0;
//}
