//#include <stdio.h>
//
//int main()
//{
//	//������ �迭 ����
//	/*char msg[5];
//
//	msg[0] = 'h';
//	msg[1] = 'e';
//	msg[2] = 'l';
//	msg[3] = 'l';
//	msg[4] = 'o';*/
//
//	//�迭�� ũ�Ⱑ 6�� ������ �迭 ����
//	char msg[6] = { 'h', 'e', 'l', 'l', 'o' };
//
//	//Ư�� ��� �˻�
//	printf("%c\n", msg[4]);
//
//	//��� ����
//	msg[0] = 'y';
//
//	//��� �߰�
//	msg[5] = 'w';
//
//	//��� ���
//	for (int i = 0; i < 6; i++) {
//		printf("%c ", msg[i]);
//	}
//	printf("\n");
//
//	//���ĺ� ǥ��
//	char data = 'a';
//	data++; //data = data + 1;
//	printf("%c\n", data);  //b
//
//	data++;
//	printf("%c\n", data);  //c
//
//	//26�� ũ�⸦ ���� ������ �迭 ����
//	char alphabets[26];
//	char ch = 'a';
//
//	//����
//	for (int i = 0; i < 26; i++) {
//		alphabets[i] = ch;
//		ch++;
//	}
//	//a ~ z�� �ƽ�Ű �ڵ尪 ���
//	for (int i = 0; i < 26; i++) {
//		printf("%c %d\n", alphabets[i], alphabets[i]);
//	}
//	return 0;
//}