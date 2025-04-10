//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	//2차원 포인터 배열 동적 할당
//	int** pp;  //정수형 포인터의 포인터
//
//	pp = (int**)malloc(sizeof(int*) * 2); //8B x 2 = 16B
//	/*pp[0] = (int*)malloc(sizeof(int) * 2);
//	pp[1] = (int*)malloc(sizeof(int) * 2);*/
//
//	for (int i = 0; i < 2; i++)
//	{
//		pp[i] = (int*)malloc(sizeof(int) * 2); //정수형 포인터
//	}
//
//	//값 저장
//	pp[0][0] = 1;
//	pp[0][1] = 2;
//	pp[1][0] = 3;
//	pp[1][1] = 4;
//
//	//값 출력
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			printf("%d\n", pp[i][j]);
//		}
//	}
//
//	//메모리 해제
//	/*free(pp[1]);
//	free(pp[0]);*/
//	for (int i = 0; i < 2; i++)
//	{
//		free(pp[i]);
//	}
//
//	free(pp);
//
//	return 0;
//}