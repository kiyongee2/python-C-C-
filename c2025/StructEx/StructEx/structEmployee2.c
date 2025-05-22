//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////Employee 구조체 정의
//typedef struct {
//	int id;
//	char name[20];
//	int salary;
//}Employee;
//
////사원 정보 출력 함수
//void displayInfo(Employee* e, int len) {
//	for (int i = 0; i < len; i++) {
//		printf("사원 ID: %d, 이름: %s, 급여: %d\n",
//			e[i].id, e[i].name, e[i].salary);
//	}
//}
//
//int main()
//{
//	//구조체 배열 동적 할당
//	Employee* emp;
//	emp = (Employee*)malloc(sizeof(Employee) * 3);
//	if (emp == NULL) {
//		printf("동적 메모리 할당에 실패했습니다.\n");
//		exit(1);
//	}
//
//	//emp 1명 생성
//	emp[0].id = 1001;
//	strcpy_s(emp[0].name, sizeof(emp[0].name), "강사원");
//	emp[0].salary = 2000000;
//
//	//emp 2명 생성
//	emp[1].id = 1002;
//	strcpy_s(emp[1].name, sizeof(emp[1].name), "박대리");
//	emp[1].salary = 3000000;
//
//	//emp 3명 생성
//	emp[2].id = 1003;
//	strcpy_s(emp[2].name, sizeof(emp[2].name), "한과장");
//	emp[2].salary = 4000000;
//	
//	displayInfo(emp, 3); //displayInfo() 호출
//
//	free(emp); //메모리 해제
//	return 0;
//}
