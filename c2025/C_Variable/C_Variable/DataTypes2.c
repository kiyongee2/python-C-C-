//#include <stdio.h>
//
//int main()
//{
//	/*
//	  'A' - �ƽ�Ű �ڵ尪(65), char�� 1Byte = 8bit
//	  int : -128 ~ 127
//	  unsigned int : 0 ~ 255
//	  unsigned ���� ������ ������ �� ���� ��� ������ 2��� �þ
//	*/
//	printf("===== char �ڷ��� =====\n");
//	char ch = 'A';
//	printf("%c %d\n", ch, ch);
//
//	char value1 = -128;
//	printf("%d\n", value1);
//
//	char value2 = 128;  //������ �ʰ��Ͽ� overflow �߻�
//	printf("%d\n", value2);
//
//	unsigned char value3 = -128; 
//	printf("%d\n", value3);
//
//	/*
//		int�� 4B = 32bit
//		-21�� ~ 21�� 
//		�� ū ����
//		long 4B(windows), 8B(macOS)
//		long long 8B
//	*/
//	printf("===== int �ڷ��� =====\n");
//	int iNum = 2100000000;
//	printf("%d\n", iNum);
//
//	int iNum2 = 2200000000; //������ �ʰ��Ͽ� overflow �߻�
//	printf("%d\n", iNum2);
//
//	printf("===== long �ڷ��� =====\n");
//	long lNum = 2200000000L; //overflow �߻�
//	printf("%ld\n", lNum);
//
//	long long llNum = 2200000000L; 
//	printf("%lld\n", llNum);
//
//	/*
//		float - 4B, �Ҽ� 6�ڸ� ǥ��
//		double - 8B, �Ҽ� 15�ڸ� ǥ��
//		���е��� ǥ��
//	*/
//	printf("=== float�� double �ڷ��� ===\n");
//	float fNum = 0.1234567F;  //����
//	printf("%.6f\n", fNum);
//
//	double dNum = 0.1234567890123456;  //����
//	printf("%.15lf\n", dNum);
//
//	return 0;
//}