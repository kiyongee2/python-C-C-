//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = { 41, 36, 8, 77, 15 };
//	int i, j, temp;
//	
//	//비교와 교환 반복
//	for (i = 0; i < 4; i++) {
//		int minIdx = i;  //현재 위치(행)를 최소값으로 설정
//		for (j = i + 1; j < 5; j++) {
//			if (arr[j] < arr[minIdx])
//				minIdx = j; //비교후 최소값 위치 변경
//		}
//
//		//교환 처리
//		temp = arr[i];
//		arr[i] = arr[minIdx];
//		arr[minIdx] = temp;
//	}
//
//	//정렬 후 출력
//	for (i = 0; i < 5; i++)
//		printf("%d ", arr[i]);
//
//	return 0;
//}