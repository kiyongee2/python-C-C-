#define _CRT_SECURE_NO_WARNINGS
#include "SpeedGugu.h"

static int NumGames = 0;
static int NumWins = 0;
static double Score = 0;
double tElapsed = 0;

static bool playGuguOnce() {
	int a = rand() % 8 + 2;
	int b = rand() % 8 + 2;
	int result;

	NumGames++;
	printf("[문제%2d]: %2d x %2d = ", NumGames, a, b);
	scanf("%d", &result);
	if (result == a * b) NumWins++;
	return (result == a * b);
}

double playSpeedGugu(int nPlay) {
	clock_t start = clock();
	for (int i = 0; i < nPlay; i++) {
		if (playGuguOnce() == false)
			printf("\t틀렸습니다.\n");
	}

	clock_t end = clock();
	tElapsed = (double)(end - start) / CLOCKS_PER_SEC;
	printf("%lf", tElapsed);

	Score = (NumGames > NumWins) ? 0.0
		: 100 * (5.0 * NumGames - tElapsed) / (5.0 * NumGames);
	return Score;
}