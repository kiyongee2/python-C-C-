#include <stdio.h>
#define RATE_KPH_MPH 1.6093

/*
	KPH(ų�ι���)�� MPH(����)�� ��ȯ
*/

int main()
{
	int kph;
	double mph;

	printf("����� ������ �Է��ϼ���[KPH]: ");
	scanf_s("%d", &kph);

	mph = kph / RATE_KPH_MPH; //���Ϸ� ȯ��

	printf("����� ������ %.2lf[MPH]�Դϴ�.\n", mph);
	
	return 0;
}
