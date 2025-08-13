//#include <stdio.h>
//
//int binarySearch(int a[], int n, int x) {
//    int low = 0;
//    int high = n - 1;
//
//    while (low <= high) {
//        int mid = (low + high) / 2;
//
//        if (a[mid] == x)
//            return mid; // 찾은 위치 반환
//        else if (a[mid] < x)
//            low = mid + 1;
//        else
//            high = mid - 1;
//    }
//    return -1; // 못 찾음
//}
//
//int main() {
//
//    int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int x = 8;
//
//    int idx = binarySearch(arr, size, x);
//    if (idx == -1)
//        printf("%d은 없습니다.\n", x);
//    else
//        printf("%d은 a[%d]에 있습니다.\n", x, idx);
//
//    return 0;
//}
