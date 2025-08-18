//#include <stdio.h>
//
//// �迭�� �� ���� ��ȯ
//void swap(int* x, int* y) {
//    int temp = *x;
//    *x = *y;
//    *y = temp;
//}
//
//// �� ������ ���� �Լ�
//int partition(int a[], int left, int right) {
//    int pl = left;        // ���� Ŀ��
//    int pr = right;       // ������ Ŀ��
//    int pivot = a[(pl + pr) / 2]; // ��� �� �ǹ�
//
//    while (pl <= pr) {
//        while (a[pl] < pivot) pl++;  // �ǹ����� ū �� ���� ������ �̵�
//        while (a[pr] > pivot) pr--;  // �ǹ����� ���� �� ���� ������ �̵�
//        if (pl <= pr) {
//            swap(&a[pl], &a[pr]);    // ��ȯ
//            pl++;
//            pr--;
//        }
//    }
//    return pl; // ���� ��� ȣ�⿡ ����� ���� ���� ��ȯ
//}
//
//// �� ���� �Լ� (���)
//void quickSort(int a[], int left, int right) {
//    if (left < right) {
//        int index = partition(a, left, right);
//        quickSort(a, left, index - 1);   // ���� �κ� �迭 ����
//        quickSort(a, index, right);      // ������ �κ� �迭 ����
//    }
//}
//
//int main() {
//    int arr[] = { 1, 8, 7, 4, 5, 2, 6, 3, 9 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    printf("���� ��: ");
//    for (int i = 0; i < size; i++)
//        printf("%d ", arr[i]);
//    putchar('\n');
//
//    quickSort(arr, 0, size - 1);
//
//    printf("���� ��: ");
//    for (int i = 0; i < size; i++)
//        printf("%d ", arr[i]);
//    putchar('\n');
//
//    return 0;
//}
