//#include <stdio.h>
//#include <stdlib.h> //malloc(), free()
//
//int main()
//{
//	/*//배열 - 정적 할당(메모리 - 스택 영역)
//	int n[5];
//
//	n[0] = 10;
//	n[1] = 20;*/
//
//	//배열 - 동적 할당(메모리 - 힙 영역)
//	int* pn;
//	int i;
//
//	pn = (int *)malloc(sizeof(int) * 5);
//	if (pn == NULL)
//	{
//		printf("동적 메모리 할당에 실패했습니다.\n");
//		exit(1); //강제 종료
//	}
//
//	/*pn[0] = 2;
//	pn[1] = 4;
//	printf("%d %d\n", pn[0], pn[1]);*/
//
//	//2의 배수 저장
//	for (i = 0; i < 5; i++){
//		pn[i] = (i + 1) * 2;
//	}
//
//	for (i = 0; i < 5; i++){
//		printf("%d ", pn[i]); //2, 4, 6, 8, 10
//	}
//
//	free(pn); //메모리 해제
//
//	return 0;
//}