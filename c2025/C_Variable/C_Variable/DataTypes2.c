//#include <stdio.h>
//
//int main()
//{
//	/*
//	  'A' - �ƽ�Ű �ڵ尪(65), char�� 1Byte = 8bit
//	  char : -128 ~ 127
//	  unsigned int : 0 ~ 255
//	  unsigned ���� ������ ������ �� ���� ��� ������ 2��� �þ
//	*/
//	printf("===== char �ڷ��� =====\n");
//	char ch = 'A';
//	char value1 = -128;
//	char value2 = 128;  //������ �ʰ��Ͽ� overflow �߻�
//
//	printf("%c %d\n", ch, ch);
//	printf("%d\n", value1);
//	printf("%d\n", value2);
//	
//	unsigned char value3 = 128; 
//	short value4 = 128;
//	printf("%d %d\n", value3, value4);
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
//	int iNum2 = 2200000000; //������ �ʰ��Ͽ� overflow �߻�
//
//	printf("%d\n", iNum);
//	printf("%d\n", iNum2);
//
//	printf("===== long �ڷ��� =====\n");
//	long lNum = 2200000000L; //overflow �߻�
//	//window(os) - long long, mac(os) - long
//	long long llNum = 2200000000L; 
//
//	printf("%ld\n", lNum);
//	printf("%lld\n", llNum);
//
//	/*
//		float - 4B, �Ҽ� 6�ڸ� ǥ��
//		double - 8B, �Ҽ� 15�ڸ� ǥ��
//		���е��� ǥ��
//	*/
//	printf("=== float�� double �ڷ��� ===\n");
//	float fNum = 0.1234567F;  //����
//	double dNum = 0.1234567890123456;  //����
//
//	printf("%.6f\n", fNum);
//	printf("%.15lf\n", dNum);
//
//	return 0;
//}