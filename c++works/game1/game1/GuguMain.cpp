#include "SpeedGugu.h";

void main() {

	srand((unsigned)time(NULL));

	int nPlay = 10;
	printf("[스피드 구구단 게임]\n\n");
	printf("%d번 테스트 하겠습니다.\n", nPlay);
	printf("준비되면 엔터.");
	getchar();
	system("cls");

	double score = playSpeedGugu(nPlay);
	printf("\n점수 = %4.1f점(총 %4.1f초)", score, tElapsed);
}