#include <stdio.h>

void wordWrite();
void wordRead();
int main()
{
	//영어 단어 쓰기
	wordWrite();

	//영어 단어 읽기
	wordRead();

	return 0;
}

void wordWrite()
{
	FILE* fp; //파일 포인터 변수 

	if (fopen_s(&fp, "word.txt", "w") != 0) {
		perror("파일 열기에 실패함\n");
		return 1;  //에러시 1 or -1
	}

	char* words[] = { "ant", "bear", "chicken", "cow", "dog", "elephant",
		"monkey", "lion", "tiger", "horse", "snake" };

	int wordCount = sizeof(words) / sizeof(words[0]);
	//printf("%d\n", wordCount);

	for (int i = 0; i < wordCount; i++) {
		fprintf(fp, "%s\n", words[i]);
	}

	fclose(fp);
	printf("파일 쓰기 완료!\n");
}

void wordRead()
{
	FILE* fp; //파일 포인터 변수 
	char word[256];

	if (fopen_s(&fp, "word.txt", "r") != 0) {
		perror("파일 열기에 실패함\n");
		return 1;  //에러시 1 or -1
	}

	//파일 읽기
	while (1) {
		if (fgets(word, sizeof(word), fp) == NULL) 
			break;
		printf("%s", word);
	}

	/*while (fgets(word, sizeof(word), fp) != NULL) {
		printf("%s", word);
	}*/

	fclose(fp);
}