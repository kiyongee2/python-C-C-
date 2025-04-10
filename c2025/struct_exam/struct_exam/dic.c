//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h> //strchr()
//#include <stdlib.h> //system() 
//
//#define MAX_LINE_LEN 255
//#define MAX_WORD_LEN 80
//#define MAX_MEANING_LEN 125
//
//int main() {
//	char line[MAX_LINE_LEN];
//	char searchWord[MAX_WORD_LEN];
//	char word[MAX_WORD_LEN];
//	char meaning[MAX_MEANING_LEN];
//	
//	FILE* fp;
//	char* pos;
//	int isFind;  //검색 유무
//	char isExit; //계속 여부
//
//	fp = fopen("meaning.txt", "r");
//	if (fp == NULL) {
//		printf("file open fail.");
//		return 0;
//	}
//
//	// fgets() - 저장된 배열의 주소를 리턴
//	//fgets(line, MAX_LINE_LEN, fp);
//	//printf("%s", line);
//
//	do {
//		fseek(fp, 0, 0);  //파일 포인터를 처음으로 돌림
//		system("cls");  //화면 지우기, mac-clear
//		printf("\n\n검색 단어 입력: ");
//		gets_s(searchWord, MAX_WORD_LEN);
//
//		isFind = 0;
//		while (fgets(line, MAX_LINE_LEN, fp) != NULL) {
//
//			pos = strchr(line, ' '); //공백문자로 구분
//			*pos = '\0';   //공백 위치에 널문자('\0') 저장
//			strcpy(word, line); //단어 분리
//			strcpy(meaning, pos + 1);  //뜻 분리
//
//			if (strcmp(word, searchWord) == 0) { //strcmp-두 문자열이 일치하면 0을 리턴
//				strcpy(meaning, pos + 1);
//				printf("\n\n\t\t검색한 단어 %s의 뜻 => %s\n", word, meaning);
//				isFind = 1;  //검색 되었다면 1로 변경
//				break;
//			}
//			//printf("단어: %s, 뜻: %s\n", word, meaning);
//		}
//
//		if (isFind == 0) {
//			printf("\n\n\t\t검색한 단어는 존재하지 않습니다.");
//		}
//		printf("\n\n\t\t검색을 계속 하려면 Y/y, 종료하려면 아무키나 누르세요: ");
//		isExit = getchar();
//		while (getchar() != '\n');  //버퍼 비우기
//	} while (isExit == 'Y' || isExit == 'y');
//	
//	fclose(fp);
//	return 0;
//}