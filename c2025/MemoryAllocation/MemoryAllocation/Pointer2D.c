//#include <stdio.h>
//#include <stdlib.h> //malloc(), free()
//
//int main()
//{
//	int** pp;
//	int i, j;
//	int k = 0;
//
//	pp = (int **)malloc(sizeof(int*) * 2); //16byte
//
//	if (pp == NULL)
//	{
//		printf("동적 메모리 할당에 실패했습니다.\n");
//		exit(1); //강제 종료
//	}
//
//	//동적 할당
//	for (i = 0; i < 2; i++)
//	{
//		pp[i] = (int*)malloc(sizeof(int) * 2);
//	}
//
//	//값 저장
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			k++;
//			pp[i][j] = k;
//		}
//	}
//
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("%d ", pp[i][j]);
//		}
//	}
//
//	//메모리 해제
//	for (i = 0; i < 2; i++)
//	{
//		free(pp[i]); 
//	}
//
//	return 0;
//}