#include <stdio.h>

int main()
{
	//ȸ�� ���� �Է�
	char id[20], password[256], name[30];
	float weight, height;

	printf("\n===== ȸ�� ���� �Է� =====\n");
	printf("���̵� �Է�: ");
	//sizeof(id) - �Է� ũ�⸦ ������ ���� �����÷ο� ����
	scanf_s("%s", id, sizeof(id));

	printf("��й�ȣ �Է�: ");
	scanf_s("%s", password, sizeof(password));

	printf("�̸� �Է�: ");
	scanf_s("%s", name, sizeof(name));

	printf("������ �Է�: ");
	scanf_s("%f", &weight);

	printf("Ű �Է�: ");
	scanf_s("%f", &height);

	printf("\n===== ȸ�� ���� ��� =====\n");
	printf("���̵�: %s\n", id);
	printf("��й�ȣ: %s\n", password);
	printf("�̸�: %s\n", name);
	printf("������: %.1f\n", weight);
	printf("Ű: %.1f\n", height);

	return 0;
}