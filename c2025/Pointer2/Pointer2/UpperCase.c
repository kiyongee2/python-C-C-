//#include <stdio.h>
//#include <string.h>
//
//void UpperCase(char);
//int main()
//{
//	char buf[] = "I am a student";
//	int length, i;
//
//	/*printf("%c\n", buf[0]);
//	printf("%c\n", buf[1]);
//	printf("%c\n", buf[2]);*/
//
//	length = strlen(buf);
//	//printf("%d\n", length);
//
//	for (i = 0; i < length; i++)
//	{
//		UpperCase(buf[i]);
//	}
//
//	return 0;
//}

void UpperCase(char data)
{
	if (data >= 'a' && data <= 'z')
	{
		//data = data - ('a' - 'A'); //대문자로 변환
		data -= ('a' - 'A'); 
	}
	printf("%c", data);
}
