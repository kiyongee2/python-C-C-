#include <stdio.h>

void binarySearchAll(int a[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int found = -1;

    // 1차: 하나의 위치 찾기
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
        printf("%d은 없습니다.\n", x);
        return;
    }

    // 2차: 왼쪽 방향 확장
    int left = found - 1;
    while (left >= 0 && a[left] == x) {
        left--;
    }

    // 3차: 오른쪽 방향 확장
    int right = found + 1;
    while (right < n && a[right] == x) {
        right++;
    }

    // 4차: 결과 출력
    printf("%d은 총 %d개 발견되었습니다.\n", x, right - left - 1);
    printf("위치: ");
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
