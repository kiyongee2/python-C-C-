//#include <stdio.h>
//#include <stdlib.h>
//
//int searchAll(int a[], int n, int x, int idxs[]) {
//    int count = 0;
//    for (int i = 0; i < n; i++) {
//        if (a[i] == x) {
//            idxs[count++] = i; // �߰��� �ε����� ����
//        }
//    }
//    return count; // ã�� ���� ��ȯ
//}
//
//int main() {
//
//    int arr[9] = { 5, 9, 2, 4, 8, 6, 7, 1, 6 }; // 6�� �� �� ����
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int x = 6; // ã�� ��
//    int* idxs; // ã�� �ε��� ����
//    int count; // �˻� ���� ����
//     
//    idxs = (int*) malloc(sizeof(int) * size);
//        
//    count = searchAll(arr, size, x, idxs); //���� Ž�� ȣ��
//    if (count == 0) {
//        puts("�˻��� �����߽��ϴ�.");
//    }
//    else {
//        printf("%d�� �� %d�� �߰ߵǾ����ϴ�.\n", x, count);
//        printf("��ġ: ");
//        for (int i = 0; i < count; i++) {
//            printf("a[%d] ", idxs[i]);
//        }
//        printf("\n");
//    }
//    free(idxs);
//
//    return 0;
//}
