#include <stdio.h>
#define MAX_LEN 4

int carts[MAX_LEN];   // 스택 배열
int idxOfCarts = 0;   // 스택의 top을 나타냄

// 요소 추가 함수 (push)
void push(int value) {
    if (idxOfCarts < MAX_LEN) {
        carts[idxOfCarts++] = value;
        printf("PUSH: %d\n", value);
    }
    else {
        printf("스택이 가득 찼습니다. PUSH 실패: %d\n", value);
    }
}

// 요소 제거 함수 (pop)
void pop() {
    if (idxOfCarts > 0) {
        int value = carts[--idxOfCarts];
        printf("POP: %d\n", value);
    }
    else {
        printf("스택이 비어 있습니다. POP 실패\n");
    }
}

// 현재 스택 출력 함수
void printStack() {
    printf("\n현재 배열 상태:\n");
    if (idxOfCarts == 0) {
        printf("(비어 있음)\n");
    }
    else {
        printf("남은 요소 수: %d\n", idxOfCarts);
        for (int i = 0; i < idxOfCarts; i++) {
            printf("%d\n", carts[i]);
        }
    }
}

int main() {
    // 값 추가 (push)
    push(80);
    push(70);
    push(95);
    push(80);
    push(100); // 초과 입력 시 실패

    // 값 제거 (pop)
    pop();
    pop();
    pop();
    pop();
    pop(); // 빈 상태에서 pop 시도

    // 최종 상태 출력
    printStack();

    return 0;
}
