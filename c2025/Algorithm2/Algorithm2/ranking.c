#include <stdio.h>

int main()
{
	int arr[] = { 41, 8, 36, 77, 15 };
	int rank[] = { 1, 1, 1, 1, 1 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int i, j;

	//비교후 순위 결정
	for (i = 0; i < size; i++){
		for (j = 0; j < size; j++) {
			if (arr[i] < arr[j])
				rank[i] = rank[i] + 1;
		}
	}

	//순위 출력
	for (i = 0; i < size; i++) {
		printf("%d ", rank[i]); //2 5 3 1 4
	}

	return 0;
}