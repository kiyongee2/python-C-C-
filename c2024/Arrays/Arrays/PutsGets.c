#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>  // strlen(), strcmp() 사용을 위해 필요

int main() {

	//getchar() 사용, 버퍼-임시 기억 장소
	char c1, c2;

	c1 = getchar();  //예) 'a' 입력 받음(버퍼에는 '\n' 남아 있음)
	while (getchar() != '\n');  //'\n'이 비워짐
	c2 = getchar(); //예) 'b'를 입력 받음(버퍼에는 '\n' 남아 있음)

	printf("%c %c", c1, c2);

	//이름과 나이 입력받기
	char name[20];
	int age;

	printf("이름 입력 :");
	scanf_s("%s", name, sizeof(name));

	while (getchar() != '\n'); 

	printf("나이 입력 :");
	scanf_s("%d", &age);

	printf("이름: %s, 나이: %d\n", name, age);
   
	//char array1[10];
	//char array2[10] = "Good luck";

	//puts(array2); //문자열 출력

	//puts("문자열을 입력하세요.");
	////gets(array1);
	////키보드 입력 - stdin, 키보드 출력-stdout
	//fgets(array1, sizeof(array1), stdin); 

	//puts(array1);

   return 0;
}
