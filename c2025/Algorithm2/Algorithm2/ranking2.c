//#include <stdio.h>
//#include <stdlib.h>
//
//void calcRank(int arr[], int rank[], int size) {
//    int i, j;
//    for (i = 0; i < size; i++) {
//        rank[i] = 1; // �ʱ� ����
//        for (j = 0; j < size; j++) {
//            if (arr[i] < arr[j])
//                rank[i]++;
//        }
//    }
//}
//
//int main() {
//    int arr[] = { 41, 8, 36, 77, 15, 60};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int* rank = (int*)malloc(sizeof(int) * size);
//
//    calcRank(arr, rank, size); //���� �Լ� ȣ��
//
//    // ���� ��� ���
//    for (int i = 0; i < size; i++) {
//        printf("%d ", rank[i]); //3 6 4 1 5 2
//    }
//    printf("\n");
//
//    free(rank);
//
//    return 0;
//}
