//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	//파일 쓰기
//	FILE* fp;
//	char str[] = "abcdefg\nhijklmn\nopqrstu\nvwxyz";
//
//	fp = fopen("data.txt", "w");  //상대 경로
//	if (fp == NULL)
//		return 1;
//
//	fprintf(fp, "%s", str);
//	fclose(fp);
//
//	//파일 읽기
//	char buf[256];
//	int i = 1;
//
//	fp = fopen("data.txt", "r");
//	if (fp == NULL)
//		return 1;
//
//	//파일의 끝까지 읽기
//	while (fgets(buf, sizeof(buf), fp) != NULL) {
//		printf("%03d: %s", i, buf);
//		i++;
//	}
//	
//	/*while (1) {
//		if (fgets(buf, sizeof(buf), fp) == NULL) break;
//		printf("%03d: %s", i, buf);
//		i++;
//	}*/
//
//	/*while (feof(fp) == 0) {
//		fgets(buf, sizeof(buf), fp);
//		printf("%04d: %s", i, buf);
//		i++;
//	}*/
//	fclose(fp);
//
//	
//
//	return 0;
//}