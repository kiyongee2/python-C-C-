//#include <stdio.h>
//
//// order: 1 -> ��������, 0 -> ��������
//void bubbleSort(int arr[], int size, int order) {
//    int i, j, temp;
//    int sw;
//
//    for (i = 0; i < size - 1; i++) {
//        sw = 0; // �� ȸ�� ���� �� �ʱ�ȭ
//        for (j = 0; j < size - 1 - i; j++) {
//            if ((order == 1 && arr[j] > arr[j + 1]) ||
//                (order == 0 && arr[j] < arr[j + 1])) {
//                // �� ��ȯ
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//                sw = 1; // ��ȯ �߻�
//            }
//        }
//        if (!sw) { // ��ȯ ������ ���� ����
//            printf("��ȯ����.\n");
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
//    // �������� ����
//    printf("��������: ");
//    bubbleSort(arr1, 5, 1);
//    for (i = 0; i < 5; i++) printf("%d ", arr1[i]);
//    printf("\n");
//
//    // �������� ����
//    printf("��������: ");
//    bubbleSort(arr2, 5, 0);
//    for (i = 0; i < 5; i++) printf("%d ", arr2[i]);
//    printf("\n");
//
//    return 0;
//}
