//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	int you;
//	int coin;
//	//char aspect[][10] = { "", "앞면", "뒷면" };
//	char* aspect[] = { "", "앞면", "뒷면" };
//
//	srand(time(NULL));
//
//	//printf("%s\n", aspect[1]); //앞면
//	printf("앞면은 1, 뒷면은 2, 종료는 다른 값을 입력하세요\n");
//
//	while (1){
//		coin = rand() % 2 + 1;
//		printf("동전을 던졌습니다. 앞면? 뒤면? : ");
//		scanf_s("%d", &you);  //1, 2 입력
//
//		if (you < 1 || you > 2) { //1 or 2 이외의 수 입력
//			printf("게임을 종료합니다.\n");
//			break;
//		}
//		else {
//			printf("사용자: %s, 동전: %s\n", aspect[you], aspect[coin]);
//			//조건 연산자 활용
//			printf("%s\n", (you == coin) ? "맞았음" : "꽝!"); 
//		}
//	}
//
//	return 0;
//}
//
