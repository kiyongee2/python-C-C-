#include <stdio.h>

int main()
{
	//���� ǥ�� - �ƽ�Ű �ڵ尪
	char ch = '0';

	printf("%c %d\n", ch, ch);
	printf("%c %d\n", ch+1, ch+1);
	printf("%c %d\n", ch+2, ch+2);

	//�ѱ��� �迭�� ����
	char han[] = "��";
	char uniCode[] = "\uAC00";

	printf("%s\n", han);
	printf("%s\n", uniCode);

	//���� ǥ�� - 10����, 2����, 16����
	int num = 10;
	int bNum = 0b1010;  //2������ ���ξ� 0b�� ����
	int hNum = 0xA;     //16������ ���ξ� 0x�� ����

	printf("%d\n", num);
	printf("%d\n", bNum);
	printf("%d\n", hNum);

	//���� ���� ǥ��
	//1�� ���� - 0�� 1��, 1�� 0���� �ٲ�
	//2�� ���� - 1�� ������ ����� 1�� ����
	int num1 = 0b00000000000000000000000000000101;  //5
	int num2 = 0b11111111111111111111111111111011;  //-5 

	printf("%d %d\n", num1, num2);

	return 0;
}