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
//	int isFind;  //�˻� ����
//	char isExit; //��� ����
//
//	fp = fopen("meaning.txt", "r");
//	if (fp == NULL) {
//		printf("file open fail.");
//		return 0;
//	}
//
//	// fgets() - ����� �迭�� �ּҸ� ����
//	//fgets(line, MAX_LINE_LEN, fp);
//	//printf("%s", line);
//
//	do {
//		fseek(fp, 0, 0);  //���� �����͸� ó������ ����
//		system("cls");  //ȭ�� �����, mac-clear
//		printf("\n\n�˻� �ܾ� �Է�: ");
//		gets_s(searchWord, MAX_WORD_LEN);
//
//		isFind = 0;
//		while (fgets(line, MAX_LINE_LEN, fp) != NULL) {
//
//			pos = strchr(line, ' '); //���鹮�ڷ� ����
//			*pos = '\0';   //���� ��ġ�� �ι���('\0') ����
//			strcpy(word, line); //�ܾ� �и�
//			strcpy(meaning, pos + 1);  //�� �и�
//
//			if (strcmp(word, searchWord) == 0) { //strcmp-�� ���ڿ��� ��ġ�ϸ� 0�� ����
//				strcpy(meaning, pos + 1);
//				printf("\n\n\t\t�˻��� �ܾ� %s�� �� => %s\n", word, meaning);
//				isFind = 1;  //�˻� �Ǿ��ٸ� 1�� ����
//				break;
//			}
//			//printf("�ܾ�: %s, ��: %s\n", word, meaning);
//		}
//
//		if (isFind == 0) {
//			printf("\n\n\t\t�˻��� �ܾ�� �������� �ʽ��ϴ�.");
//		}
//		printf("\n\n\t\t�˻��� ��� �Ϸ��� Y/y, �����Ϸ��� �ƹ�Ű�� ��������: ");
//		isExit = getchar();
//		while (getchar() != '\n');  //���� ����
//	} while (isExit == 'Y' || isExit == 'y');
//	
//	fclose(fp);
//	return 0;
//}