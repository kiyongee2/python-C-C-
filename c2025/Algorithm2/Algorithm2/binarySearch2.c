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
//            return mid; // ã�� ��ġ ��ȯ
//        else if (a[mid] < x)
//            low = mid + 1;
//        else
//            high = mid - 1;
//    }
//    return -1; // �� ã��
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
//        printf("%d�� �����ϴ�.\n", x);
//    else
//        printf("%d�� a[%d]�� �ֽ��ϴ�.\n", x, idx);
//
//    return 0;
//}
