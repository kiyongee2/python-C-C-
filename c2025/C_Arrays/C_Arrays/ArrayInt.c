//#include <stdio.h>
//
//int main()
//{
//	//정수형 배열 선언
//	int arr[4];
//
//	//요소 추가
//	arr[0] = 10;
//	arr[1] = 20;
//	arr[2] = 30;
//	arr[3] = 40;
//
//	//배열 선언과 동시에 초기화
//	//int arr[4] = { 10, 20, 30, 40 };
//
//	//특정 요소 검색
//	printf("%d\n", arr[0]);
//
//	//요소 수정
//	arr[1] = 55;
//
//	//전체 요소 출력
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%-3d", arr[i]);
//	}
//	printf("\n");
//
//	//요소 삭제
//	arr[1] = 0;
//
//	for (int i = 1; i < 3; i++)
//	{
//		arr[i] = arr[i + 1];
//	}
//	 
//	//출력
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%-3d", arr[i]);
//	}
//
//	//메모리 주소 출력
//	//printf("%x %x %x\n", &arr[0], &arr[1], &arr[2]);
//	////배열의 이름은 배열의 시작 주소이다.
//	//printf("%x %x %x\n", arr, arr + 1, arr + 2);
//
//	return 0;
//}