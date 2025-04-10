//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma warning (disable : 4996)
//
//char* getName();
//
//int main() {
//
//	char* name1;
//	//char* name2;
//
//	name1 = getName();
//	//name2 = getName();
//
//	printf("Hi. %s\n", name1);
//	//printf("Hi. %s\n", name2);
//	
//	free(name1);
//	//free(name2);
//
//	return 0;
//}
//
//char* getName() {
//	char* name;
//	name = (char*)malloc(sizeof(char) * 20);
//
//	printf("당신의 이름 : ");
//	gets(name);
//
//	return name;
//}