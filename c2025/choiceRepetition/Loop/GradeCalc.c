//#include <stdio.h>
//
//int main()
//{
//	/*
//		������ ������ ���� ���� ����ϱ�
//		- 90 ~ 100�� : A
//		- 80 ~ 90�� : B
//		- 70 ~ 80�� : C
//		- 70�� �̸� : F
//	*/
//
//	int score;  //���� ����
//	char grade; //����
//
//	printf("���� �Է�: ");
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
//	printf("������ %d���̰�, ������ %c�Դϴ�.\n", score, grade);
//
//	return 0;
//}