#include <stdio.h>

int main()
{
	int arr[5] = { 41, 36, 8, 77, 15 };
	int i, j, temp;
	
	for (i = 0; i < 4; i++) {
		int minIdx = i;  //현재 위치(행)를 최소값으로 설정
		for (j = i + 1; j < 5; j++) {
			if (arr[j] < arr[minIdx])
				minIdx = j; //비교후 최소값 위치 변경
		}
		//교환 처리
		temp = arr[i];
		arr[i] = arr[minIdx];
		arr[minIdx] = temp;
	}

	//정렬 후 출력
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);

	/*
	    {41, 36, 8, 77, 15}
		1회전 (i=0)
		minIdx = 0 (41)
		뒤에서 최소값 탐색 → 8이 가장 작음 (minIdx = 2)
		교환 → {8, 36, 41, 77, 15}

		2회전 (i=1)
		minIdx = 1 (36)
		뒤에서 최소값 탐색 → 15 (minIdx = 4)
		교환 → {8, 15, 41, 77, 36}

		3회전 (i=2)
		minIdx = 2 (41)
		뒤에서 최소값 탐색 → 36 (minIdx = 4)
		교환 → {8, 15, 36, 77, 41}

		4회전 (i=3)
		minIdx = 3 (77)
		뒤에서 최소값 탐색 → 41 (minIdx = 4)
		교환 → {8, 15, 36, 41, 77}
	*/

	return 0;
}