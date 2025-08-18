//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//// 배열의 두 원소 교환
//void swap(int* x, int* y) {
//    int temp = *x;
//    *x = *y;
//    *y = temp;
//}
//
//// 퀵 정렬의 분할 함수
//void quickSorting(int a[], int left, int right) {
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
//    if (left < pr)
//        quickSorting(a, left, pr);  //왼쪽부분 재귀 호출
//    if (pl < right)
//        quickSorting(a, pl, right); //오른쪽 부분 재귀 호출
//}
//
//int main() {
//    /*int arr[] = { 1, 8, 7, 4, 5, 2, 6, 3, 9 };
//    int size = sizeof(arr) / sizeof(arr[0]);*/
//
//    int size; //배열 요소의 수
//    int* arr; //배열(동적 할당)
//
//    puts(">>> 퀵 정렬 >>>");
//    printf("요소의 개수: ");
//    scanf("%d", &size);
//    arr = (int*)malloc(sizeof(int) * size);
//
//    //사용자 입력
//    for (int i = 0; i < size; i++) {
//        printf("arr[%d]: ", i);
//        scanf("%d", &arr[i]);
//    }
//
//    quickSorting(arr, 0, size - 1); //퀵 정렬 함수 호출
//
//    printf("정렬 후: ");
//    for (int i = 0; i < size; i++)
//        printf("%d ", arr[i]);
//    free(arr); //메모리 반납
//
//    return 0;
//}