#include <stdio.h>

void binarySearchAll(int a[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int found = -1;

    // 1��: �ϳ��� ��ġ ã��
    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == x) {
            found = mid;
            break;
        }
        else if (a[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (found == -1) {
        printf("%d�� �����ϴ�.\n", x);
        return;
    }

    // 2��: ���� ���� Ȯ��
    int left = found - 1;
    while (left >= 0 && a[left] == x) {
        left--;
    }

    // 3��: ������ ���� Ȯ��
    int right = found + 1;
    while (right < n && a[right] == x) {
        right++;
    }

    // 4��: ��� ���
    printf("%d�� �� %d�� �߰ߵǾ����ϴ�.\n", x, right - left - 1);
    printf("��ġ: ");
    for (int i = left + 1; i < right; i++) {
        printf("a[%d] ", i);
    }
    printf("\n");
}

int main() {
    int arr[] = { 1, 2, 3, 5, 5, 5, 6, 7, 9 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    binarySearchAll(arr, size, x);

    return 0;
}
