//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
///*
//    - 배열 자료구조의 문제 및 연결 리스트의 필요성
//	배열에서 특정 요소를 삭제하면 
//	빈 방을 왼쪽으로 이동하지 않고 놔둔다면 새로운 데이터를 넣을때마다
//	빈 방을 찾아야하는 번거로움이 있다.
//	배열은 이러한 메모리 관리가 필요하고 이러한 문제를 해결하는 것이
//	연결 리스트이다.
//*/
//
////Student 구조체 정의
//typedef struct {
//	int number;
//}Student;
//
//int main()
//{
//	Student s[10]; //구조체 배열 생성
//	int i;
//
//	for (i = 0; i < 10; i++) {
//		s[i].number = i + 1; //요소 저장
//	}
//
//	for (i = 0; i < 10; i++) { //전체 출력
//		printf("%d ", s[i].number);
//	}
//	printf("\n");
//
//	printf("2번 학생 전학\n");
//	s[1].number = 0;  //요소 삭제
//
//	for (i = 0; i < 10; i++) {
//		printf("%d ", s[i].number);
//	} //1 0 3 4 5 6 7 8 9 10
//	printf("\n");
//
//	for (i = 1; i < 9; i++) {
//		s[i].number = s[i + 1].number;
//	}
//	s[9].number = 0;
//
//	printf("방을 왼쪽으로 이동\n");
//	for (i = 0; i < 10; i++) {
//		printf("%d ", s[i].number);
//	}//1 3 4 5 6 7 8 9 10 0
//	
//	return 0;
//}
