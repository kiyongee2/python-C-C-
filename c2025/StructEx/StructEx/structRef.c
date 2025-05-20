//#include <stdio.h>
//
////점(좌표) 구조체 정의
//struct Point
//{
//	int x;
//	int y;
//};
//
////사각형 구조체 정의
//struct Rectangle
//{
//	//Point 구조체 자료형 참조
//	struct Point p1; 
//	struct Point p2;
//};
//
//int main()
//{
//	//두 점을 이용한 직사각형 만들기
//	//좌측 상단 좌표, 우측 하단 좌표 생성
//
//	/*struct Rectangle rect;
//	rect.p1.x = 1;
//	rect.p1.y = 5;
//
//	rect.p2.x = 4;
//	rect.p2.y = 2;*/
//
//	struct Rectangle rect = {
//		.p1 = {1, 5},
//		.p2 = {5, 2}
//	};
//	int width, height;
//
//	//좌표 출력
//	printf("점1(%d, %d), 점2(%d, %d)\n", rect.p1.x, rect.p1.y,
//		rect.p2.x, rect.p2.y);
//
//	//너비와 높이 계산
//	width = abs(rect.p2.x - rect.p1.x);
//	height = abs(rect.p2.y - rect.p1.y);
//
//	printf("너비:%d, 높이: %d\n", width, height);
//
//	return 0;
//}
