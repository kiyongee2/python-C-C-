#include <stdio.h>

int main_Hello() {
	//printf("Hello World!!\n");
	/*int age = 12;
	printf("%d\n", age);

	age = 13;
	printf("%d\n", age);

	float height = 169.9;
	printf("%.1f\n", height);

	double weight = 55.5;
	printf("%.2lf\n", weight);*/

	// 상수
	const int YEAR = 2000;
	//YEAR = 2001;

	// 입력 - scanf()
	
	/*int input;
	printf("값 입력: ");
	scanf_s("%d", &input);
	printf("입력값: %d\n", input);*/

	// 문자, 문자열
	char ch = 'A';
	printf("%c\n", ch);

	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);*/

	// 질문하기
	char name[256];
	printf("이름이 뭐에요?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("나이가 몇 살이에요?");
	scanf_s("%d", &age);

	// 출력하기
	printf("*** 나의 정보 ***\n");
	printf("이름: %s\n", name);
	printf("나이: %d\n", age);




	

	return 0;
}