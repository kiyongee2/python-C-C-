#include "SpeedGugu.h";

void main() {

	srand((unsigned)time(NULL));

	int nPlay = 10;
	printf("[���ǵ� ������ ����]\n\n");
	printf("%d�� �׽�Ʈ �ϰڽ��ϴ�.\n", nPlay);
	printf("�غ�Ǹ� ����.");
	getchar();
	system("cls");

	double score = playSpeedGugu(nPlay);
	printf("\n���� = %4.1f��(�� %4.1f��)", score, tElapsed);
}