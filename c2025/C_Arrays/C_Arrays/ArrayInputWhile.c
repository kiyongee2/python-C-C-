//#include <stdio.h>
//
//int main()
//{
//	int arr[5];    //배열 선언
//	int idx = 0;   //배열의 인덱스
//	int min = 999; //최소값 설정
//
//	while (idx < 5)
//	{
//		printf("%d번째의 수 입력: ", idx + 1);
//		/*scanf_s("%d", &arr[idx]);
//		  idx++; */
//
//		//문자 입력시 오류 처리
//		if (scanf_s("%d", &arr[idx]) == 1) 
//		{
//			if (arr[idx] < min)
//				min = arr[idx];
//			idx++; //인덱스 1증가
//		}
//		else
//		{
//			puts("잘못된 입력입니다! 숫자를 입력하세요.");
//			while (getchar() != '\n'); //입력 버퍼 비우기 
//			continue; //while문 처음으로 돌아감
//		}
//	}
//	printf("최소값은 %d\n", min);
//
//	return 0;
//}
