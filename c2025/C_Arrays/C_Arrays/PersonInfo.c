#include <stdio.h>

int main()
{
	//회원 정보 입력
	char id[20], password[256], name[30];
	float weight, height;

	printf("\n===== 회원 정보 입력 =====\n");
	printf("아이디 입력: ");
	//sizeof(id) - 입력 크기를 제한해 버퍼 오버플로우 방지
	scanf_s("%s", id, sizeof(id));

	printf("비밀번호 입력: ");
	scanf_s("%s", password, sizeof(password));

	printf("이름 입력: ");
	scanf_s("%s", name, sizeof(name));

	printf("몸무게 입력: ");
	scanf_s("%f", &weight);

	printf("키 입력: ");
	scanf_s("%f", &height);

	printf("\n===== 회원 정보 출력 =====\n");
	printf("아이디: %s\n", id);
	printf("비밀번호: %s\n", password);
	printf("이름: %s\n", name);
	printf("몸무게: %.1f\n", weight);
	printf("키: %.1f\n", height);

	return 0;
}