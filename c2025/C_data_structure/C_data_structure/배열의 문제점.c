//#include <stdio.h>
//
////학생 구조체 정의
//typedef struct {
//	int num;  //번호
//}Student;
//
//int main()
//{
//	Student st[10]; //구조체 배열 생성
//	int i;
//
//	for (i = 0; i < 10; i++) {
//		st[i].num = i + 1;  //요소 저장
//	}
//
//	for (i = 0; i < 10; i++) {
//		printf("%d ", st[i].num);  //요소 출력
//	}
//	printf("\n");
//
//	printf("4번 학생 전학\n");
//	st[3].num = 0;  //요소 삭제
//
//	printf("방을 왼쪽으로 이동\n");
//	for (i = 3; i < 9; i++) {
//		st[i].num = st[i + 1].num;  //한 칸 왼쪽으로 밀기
//	}
//	st[9].num = 0;
//
//	for (i = 0; i < 10; i++) {
//		printf("%d ", st[i].num);  //1 2 3 5 6 7 8 9 10 0
//	}
//
//	return 0;
//}
//
