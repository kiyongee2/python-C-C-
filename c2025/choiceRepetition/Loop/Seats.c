//#include <stdio.h>
//
//int main()
//{
//	/*
//		자리배치도 만들기
//	*/
//	int customer;  //입장객
//	int column;    //좌석 열
//	int row;       //줄(행)
//
//	printf("입장객 수 입력: ");
//	scanf_s("%d", &customer);
//
//	printf("좌석열 수 입력: ");
//	scanf_s("%d", &column);
//
//	if (customer % column == 0) //나누어 떨어짐
//	{
//		row = customer / column; //기본이 int형임
//	}
//	else
//	{
//		row = (int)(customer / column) + 1;
//	}
//	printf("%d개의 줄이 필요합니다.\n", row);  
//	
//	/*for (int i = 0; i < row; i++)
//	{
//		for (int j = 1; j <= column; j++)
//		{
//			int seatNum = i * column + j;  //좌석 번호
//			if (seatNum > customer) 
//				break;
//			printf("좌석%d ", seatNum);
//		}
//		printf("\n");
//	}*/
//
//	return 0;
//}
