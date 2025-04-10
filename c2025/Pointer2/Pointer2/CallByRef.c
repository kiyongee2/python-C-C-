//#include <stdio.h>
//
//void CallByValue(int);
//void CallByReference(int*);
//int main()
//{
//	int num = 10;
//	int* pn = &num;
//
//	puts("\n========= 값에 의한 호출 =============\n");
//	printf("main 함수 내에서 호출전: %d\n", num);
//	CallByValue(num);
//	printf("main 함수 내에서 호출후: %d\n", num);
//
//	puts("\n========= 참조에 의한 호출 =============\n");
//	printf("main 함수 내에서 호출전: %d\n", num);
//	CallByReference(pn);
//	printf("main 함수 내에서 호출후: %d\n", num);
//
//	return 0;
//}
//
//void CallByValue(int n) 
//{
//	printf("함수 내에서 값 변경전: %d\n", n);
//	n++;
//	printf("함수 내에서 값 변경후: %d\n", n);
//}
//
//void CallByReference(int *p)
//{
//	printf("함수 내에서 값 변경후: %d\n", *p);
//	//*p = *p + 1;
//	(*p)++;
//	printf("함수 내에서 값 변경후: %d\n", *p);
//}
