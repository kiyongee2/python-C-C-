#include <stdio.h>

int main()
{
	int arr[5] = { 1, 3, 5, 7, 9 };
	int sum = 0;   //ÃÑÁ¡
	double avg;    //Æò±Õ

	int size = sizeof(arr) / sizeof(arr[0]);
	//printf("¹è¿­ÀÇ Å©±â: %d\n", size);

	for (int i = 0; i < size; i++) {
		sum += arr[i];
		//printf("arr[%d]=%d, sum=%d\n", i, arr[i], sum);
	}
	avg = (double)sum / 4;
	printf("ÇÕ°è: %d\n", sum);
	printf("Æò±Õ: %.1lf\n", avg);

	return 0;
}