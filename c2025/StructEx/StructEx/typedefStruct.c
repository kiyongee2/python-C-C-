//#include <stdio.h>
//
//typedef struct {
//	int id;
//	char name[20];
//	int salary;
//}Employee;
//
//int main()
//{
//	//struct 없이 구조체 변수 선언 및 값 저장
//	/*Employee e1 = {1, "이사원", 3000000};
//
//	printf("사원 ID: %d\n", e1.id);
//	printf("이름: %s\n", e1.name);
//	printf("급여: %d\n", e1.salary);*/
//
//	//구조체 배열 3명 생성
//	Employee e[3] = {
//		{1, "이사원", 2500000},
//		{2, "김사원", 3000000},
//		{3, "박사원", 3500000},
//	};
//	int i;
//
//	//전체 출력
//	for (i = 0; i < 3; i++)
//	{
//		printf("사원 ID: %d, 이름: %s, 급여: %d\n",
//				e[i].id, e[i].name, e[i].salary);
//	}
//
//	return 0;
//}
