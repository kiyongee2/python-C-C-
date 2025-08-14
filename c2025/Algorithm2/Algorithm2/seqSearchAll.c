//#include <stdio.h>
//#include <stdlib.h>
//
//int searchAll(int a[], int n, int x, int idxs[]) {
//    int count = 0;
//    for (int i = 0; i < n; i++) {
//        if (a[i] == x) {
//            idxs[count++] = i; // 발견한 인덱스를 저장
//        }
//    }
//    return count; // 찾은 개수 반환
//}
//
//int main() {
//
//    int arr[9] = { 5, 9, 2, 4, 8, 6, 7, 1, 6 }; // 6이 두 번 있음
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int x = 6; // 찾을 값
//    int* idxs; // 찾은 인덱스 저장
//    int count; // 검색 값의 개수
//     
//    idxs = (int*) malloc(sizeof(int) * size);
//        
//    count = searchAll(arr, size, x, idxs); //순차 탐색 호출
//    if (count == 0) {
//        puts("검색에 실패했습니다.");
//    }
//    else {
//        printf("%d은 총 %d개 발견되었습니다.\n", x, count);
//        printf("위치: ");
//        for (int i = 0; i < count; i++) {
//            printf("a[%d] ", idxs[i]);
//        }
//        printf("\n");
//    }
//    free(idxs);
//
//    return 0;
//}
