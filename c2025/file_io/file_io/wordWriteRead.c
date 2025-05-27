#include <stdio.h>

void wordWrite();
void wordRead();
int main()
{
	//���� �ܾ� ����
	wordWrite();

	//���� �ܾ� �б�
	wordRead();

	return 0;
}

void wordWrite()
{
	FILE* fp; //���� ������ ���� 

	if (fopen_s(&fp, "word.txt", "w") != 0) {
		perror("���� ���⿡ ������\n");
		return 1;  //������ 1 or -1
	}

	char* words[] = { "ant", "bear", "chicken", "cow", "dog", "elephant",
		"monkey", "lion", "tiger", "horse", "snake" };

	int wordCount = sizeof(words) / sizeof(words[0]);
	//printf("%d\n", wordCount);

	for (int i = 0; i < wordCount; i++) {
		fprintf(fp, "%s\n", words[i]);
	}

	fclose(fp);
	printf("���� ���� �Ϸ�!\n");
}

void wordRead()
{
	FILE* fp; //���� ������ ���� 
	char word[256];

	if (fopen_s(&fp, "word.txt", "r") != 0) {
		perror("���� ���⿡ ������\n");
		return 1;  //������ 1 or -1
	}

	//���� �б�
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