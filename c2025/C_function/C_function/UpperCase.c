//#include <stdio.h>
//#include <string.h>
//
//void UpperCase(char alpha)
//{
//	if (alpha >= 'a' && alpha <= 'z')
//	{
//		//소문자 b인경우 98-32=66 -> 대문자 B임
//		//('a' - 'A') -> 97-65=32,
//		alpha -= ('a' - 'A'); //alpha = alpha - ('a' - 'A');
//	}
//	printf("%c", alpha);
//}
//
//int main()
//{
//	char sentence[] = "i am a student";
//	int length, i;
//
//	//문자열 인덱싱
//	printf("%c\n", sentence[0]);  //i
//	printf("%c\n", sentence[1]);  //공백
//	printf("%c\n", sentence[2]);  //a
//
//	length = strlen(sentence);  //sentence 배열의 길이
//	printf("%d\n", length);
//
//	for (i = 0; i < length; i++){
//		UpperCase(sentence[i]); //UpperCase() 호출
//	}
//
//	return 0;
//}
