//#include <stdio.h>
//#include <string.h>
//
//void UpperCase(char alpha)
//{
//	if (alpha >= 'a' && alpha <= 'z')
//	{
//		//�ҹ��� b�ΰ�� 98-32=66 -> �빮�� B��
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
//	//���ڿ� �ε���
//	printf("%c\n", sentence[0]);  //i
//	printf("%c\n", sentence[1]);  //����
//	printf("%c\n", sentence[2]);  //a
//
//	length = strlen(sentence);  //sentence �迭�� ����
//	printf("%d\n", length);
//
//	for (i = 0; i < length; i++){
//		UpperCase(sentence[i]); //UpperCase() ȣ��
//	}
//
//	return 0;
//}
