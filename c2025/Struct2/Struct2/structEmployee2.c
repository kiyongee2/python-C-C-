//#define _CRT_SECURE_NO_WARNINGS //strcpy()
//#include <stdio.h>
//
////사원 구조체 정의
//typedef struct {
//	int id;
//	char name[20];
//	int salary;
//}Employee;
//
////사원 정보 출력
//void printInfo(Employee e) {
//	printf("사원 ID: %d, 이름: %s, 급여: %d\n",
//		e.id, e.name, e.salary);
//}
//
//int main()
//{
//	//구조체 변수 선언
//	Employee emp1;
//
//	//입력
//	emp1.id = 1001;
//	strcpy(emp1.name, "박상희");
//	emp1.salary = 3000000;
//
//	//출력
//	printInfo(emp1);
//
//	//구조체 배열 선언
//	Employee employees[3] = {
//		{1001, "임시연", 2500000},
//		{1002, "우상영", 2000000},
//		{1003, "이정우", 3000000}
//	};
//
//	printf("=============== 사원 명단 ===============\n");
//	for (int i = 0; i < 3; i++) {
//		printInfo(employees[i]);
//	}
//
//	return 0;
//}
