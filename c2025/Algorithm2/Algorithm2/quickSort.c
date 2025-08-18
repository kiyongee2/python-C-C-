//#include <stdio.h>
//
//// 배열의 두 원소 교환
//void swap(int* x, int* y) {
//    int temp = *x;
//    *x = *y;
//    *y = temp;
//}
//
////배열(a)를 피벗(pivot)을 기준으로 나눔
//void partition(int a[], int n) {
//	int pl = 0;     //왼쪽 커서
//	int pr = n - 1; //오른쪽 커서
//	int pivot = a[n / 2]; //피벗은 가운데 요소
//	int temp;  //교환을 위한 임시 변수
//
//	while (pl <= pr){
//		while (a[pl] < pivot) 
//			pl++;  //피벗보다 큰 값 나올 때까지 이동
//		while (a[pr] > pivot)
//			pr--;  //피벗보다 작은 값 나올 때까지 이동
//		if (pl <= pr) {
//			//교환
//			swap(&a[pl], &a[pr]);
//			pl++;
//			pr--;
//		}
//	}
//	printf("피벗의 값은 %d입니다.\n", pivot);
//	printf("피벗 이하의 그룹\n");
//	for (int i = 0; i <= pl - 1; i++)
//		printf("%d ", a[i]); //a[0]~a[pl-1]
//	putchar('\n');
//	printf("피벗 이상의 그룹\n");
//	for (int i = pr + 1; i < n; i++)
//		printf("%d ", a[i]); //a[pr+1]~a[n-1]
//	putchar('\n');
//}
//
//int main()
//{
//	int arr[] = { 1, 8, 7, 4, 5, 2, 6, 3, 9 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	partition(arr, size);
//
//	return 0;
//}