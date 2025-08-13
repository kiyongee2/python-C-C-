//#include <stdio.h>
//
//// order: 1 -> 오름차순, 0 -> 내림차순
//void bubbleSort(int arr[], int size, int order) {
//    int i, j, temp;
//    int sw;
//
//    for (i = 0; i < size - 1; i++) {
//        sw = 0; // 각 회차 시작 시 초기화
//        for (j = 0; j < size - 1 - i; j++) {
//            if ((order == 1 && arr[j] > arr[j + 1]) ||
//                (order == 0 && arr[j] < arr[j + 1])) {
//                // 값 교환
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//                sw = 1; // 교환 발생
//            }
//        }
//        if (!sw) { // 교환 없으면 조기 종료
//            printf("교환없음.\n");
//            break;
//        }
//    }
//}
//
//int main() {
//    int arr1[5] = { 3, 2, 5, 1, 4 };
//    int arr2[5] = { 3, 2, 5, 1, 4 };
//    int i;
//
//    // 오름차순 정렬
//    printf("오름차순: ");
//    bubbleSort(arr1, 5, 1);
//    for (i = 0; i < 5; i++) printf("%d ", arr1[i]);
//    printf("\n");
//
//    // 내림차순 정렬
//    printf("내림차순: ");
//    bubbleSort(arr2, 5, 0);
//    for (i = 0; i < 5; i++) printf("%d ", arr2[i]);
//    printf("\n");
//
//    return 0;
//}
