#include <stdio.h>

void UpperCasing(char);
int main_UpperCasing()
{
	int i, length;
	char* buf = "i am a boy";

	length = strlen(buf);
	printf("%d\n", length);
	for (i = 0; i < 10; i++) {
		UpperCasing(*buf++);
	}
	return 0;
}

void UpperCasing(char data) {
	printf("%c", data - ('a' - 'A')); //iÀÎ°æ¿ì 105-32=73
}