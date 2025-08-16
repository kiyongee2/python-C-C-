//#define _CRT_SECURE_NO_WARNINGS //fopen() 처리
//#include <stdio.h>
//
//int main()
//{
//	FILE* fp; 
//	char msg[] = "행운을 빌어요~";
//
//	fp = fopen("c:/cfile/out.txt", "a");  //추가 모드 - "a"
//	if (fp == NULL) { 
//		printf("파일 열기에 실패함\n");
//		return 1;
//	}
//
//	//문자열 쓰기
//	fputs("Good Luck~\n", fp); 
//	fprintf(fp, "%s\n", msg); //서식 문자 사용
//
//	fclose(fp);
//
//	printf("파일 추가 쓰기 완료!\n");
//
//	//파일 읽기
//	char str[128];  //배열에 저장
//
//	fp = fopen("c:/cfile/out.txt", "r"); 
//	if (fp == NULL) {
//		printf("파일 열기에 실패함\n");
//		return 1;
//	}
//
//	//한 줄 읽기
//	fgets(str, sizeof(str), fp);  
//	printf("%s", str);
//
//	//모든 라인 읽기
//	while ((fgets(str, sizeof(str), fp)) != NULL) {
//		printf("%s", str);
//	}
//
//	fclose(fp);
//
//	return 0;
//}
