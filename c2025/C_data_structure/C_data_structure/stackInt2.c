//#include <stdio.h>
// 
// /*스택(stack)
//   - LIFO(Last In First Out) : 후입선출
//   - top에서 삽입, 삭제 일어남
// */
//
//#define MAX_LEN 4
//
//int stack[MAX_LEN];   // 스택 배열
//int top = -1;   // 스택의 top을 나타냄
//
//// 요소 추가 함수 (push)
//void push(int value) {
//    if (top >= MAX_LEN - 1) 
//        printf("스택이 가득 찼습니다. PUSH 실패: %d\n", value);
//    else {
//        stack[++top] = value; //선증가
//        printf("PUSH: %d\n", value);
//    }
//}
//
//int pop() {  // 요소 제거 함수 (pop)
//    if (top < 0) {
//        printf("스택이 비어 있습니다. POP 실패\n");
//        return -1;
//    }
//    else 
//        return stack[top--];
//}
//
//int main() {
//    puts("=== 스택에 자료 삽입 ===");
//    // 값 추가 (push) : 80 - 70 - 95 - 85
//    push(80);
//    push(70);
//    push(95);
//    push(85);
//    //push(100); // 초과 입력 시 실패
//
//    puts("\n=== 스택에서 자료 삭제 ===");
//    // 값 제거 (pop) : 85 - 95 - 70 - 80
//    /*printf("%d\n", stack[top]); //현재 맨 위 요소
//    pop();
//    printf("%d\n", stack[top]);
//    pop();
//    printf("%d\n", stack[top]);
//    pop();
//    printf("%d\n", stack[top]);
//    pop();
//    printf("%d\n", stack[top]);
//    pop(); //빈 상태에서 pop 시도 */
//
//    while (top != -1) { //안전한 삭제
//        printf("%d ", stack[top]);
//        pop();
//    }
//
//    return 0;
//}
