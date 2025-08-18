//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//// �迭�� �� ���� ��ȯ
//void swap(int* x, int* y) {
//    int temp = *x;
//    *x = *y;
//    *y = temp;
//}
//
//// �� ������ ���� �Լ�
//void quickSorting(int a[], int left, int right) {
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
//    if (left < pr)
//        quickSorting(a, left, pr);  //���ʺκ� ��� ȣ��
//    if (pl < right)
//        quickSorting(a, pl, right); //������ �κ� ��� ȣ��
//}
//
//int main() {
//    /*int arr[] = { 1, 8, 7, 4, 5, 2, 6, 3, 9 };
//    int size = sizeof(arr) / sizeof(arr[0]);*/
//
//    int size; //�迭 ����� ��
//    int* arr; //�迭(���� �Ҵ�)
//
//    puts(">>> �� ���� >>>");
//    printf("����� ����: ");
//    scanf("%d", &size);
//    arr = (int*)malloc(sizeof(int) * size);
//
//    //����� �Է�
//    for (int i = 0; i < size; i++) {
//        printf("arr[%d]: ", i);
//        scanf("%d", &arr[i]);
//    }
//
//    quickSorting(arr, 0, size - 1); //�� ���� �Լ� ȣ��
//
//    printf("���� ��: ");
//    for (int i = 0; i < size; i++)
//        printf("%d ", arr[i]);
//    free(arr); //�޸� �ݳ�
//
//    return 0;
//}