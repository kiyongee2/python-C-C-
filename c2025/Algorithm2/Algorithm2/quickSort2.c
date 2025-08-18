//#include <stdio.h>
//
//// 배열의 두 원소 교환
//void swap(int* x, int* y) {
//    int temp = *x;
//    *x = *y;
//    *y = temp;
//}
//
//// 퀵 정렬의 분할 함수
//int partition(int a[], int left, int right) {
//    int pl = left;        // 왼쪽 커서
//    int pr = right;       // 오른쪽 커서
//    int pivot = a[(pl + pr) / 2]; // 가운데 값 피벗
//
//    while (pl <= pr) {
//        while (a[pl] < pivot) pl++;  // 피벗보다 큰 값 나올 때까지 이동
//        while (a[pr] > pivot) pr--;  // 피벗보다 작은 값 나올 때까지 이동
//        if (pl <= pr) {
//            swap(&a[pl], &a[pr]);    // 교환
//            pl++;
//            pr--;
//        }
//    }
//    return pl; // 다음 재귀 호출에 사용할 분할 지점 반환
//}
//
//// 퀵 정렬 함수 (재귀)
//void quickSort(int a[], int left, int right) {
//    if (left < right) {
//        int index = partition(a, left, right);
//        quickSort(a, left, index - 1);   // 왼쪽 부분 배열 정렬
//        quickSort(a, index, right);      // 오른쪽 부분 배열 정렬
//    }
//}
//
//int main() {
//    int arr[] = { 1, 8, 7, 4, 5, 2, 6, 3, 9 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    printf("정렬 전: ");
//    for (int i = 0; i < size; i++)
//        printf("%d ", arr[i]);
//    putchar('\n');
//
//    quickSort(arr, 0, size - 1);
//
//    printf("정렬 후: ");
//    for (int i = 0; i < size; i++)
//        printf("%d ", arr[i]);
//    putchar('\n');
//
//    return 0;
//}
