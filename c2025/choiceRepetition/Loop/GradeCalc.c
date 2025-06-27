//#include <stdio.h>
//
//int main()
//{
//	/*
//		과목의 점수에 따른 학점 계산하기
//		- 90 ~ 100점 : A
//		- 80 ~ 90점 : B
//		- 70 ~ 80점 : C
//		- 70점 미만 : F
//	*/
//
//	int score;  //과목 점수
//	char grade; //학점
//
//	printf("점수 입력: ");
//	scanf_s("%d", &score);
//
//	if (score >= 90 && score <= 100)
//	{
//		grade = 'A';
//	}
//	else if(score >= 80) //(score >= 80 && score < 90)
//	{
//		grade = 'B';
//	}
//	else if (score >= 70)
//	{
//		grade = 'C';
//	}
//	else
//	{
//		grade = 'F';
//	}
//
//	printf("점수는 %d점이고, 학점은 %c입니다.\n", score, grade);
//
//	return 0;
//}