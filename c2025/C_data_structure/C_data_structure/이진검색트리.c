//#include <stdio.h>
//#include <stdlib.h>
//
//// 노드 구조 정의
//typedef struct Node {
//    int data;
//    struct Node* left;
//    struct Node* right;
//} Node;
//
//// 노드 생성 함수
//Node* createNode(int value) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (newNode == NULL) {
//        printf("메모리 할당 실패!\n");
//        exit(1);
//    }
//    newNode->data = value;
//    newNode->left = newNode->right = NULL;
//    return newNode;
//}
//
//// 이진 검색 트리에 삽입
//Node* insert(Node* root, int value) {
//    if (root == NULL) return createNode(value);
//
//    if (value < root->data)
//        root->left = insert(root->left, value);
//    else if (value > root->data)
//        root->right = insert(root->right, value);
//    // 중복은 무시 (원한다면 카운트 처리 가능)
//
//    return root;
//}
//
//// 중위 순회 (왼쪽 → 현재 → 오른쪽)
//void inorder(Node* root) {
//    if (root != NULL) {
//        inorder(root->left);
//        printf("%d ", root->data);
//        inorder(root->right);
//    }
//}
//
//// 노드 탐색
//Node* search(Node* root, int key) {
//    if (root == NULL || root->data == key)
//        return root;
//
//    if (key < root->data)
//        return search(root->left, key);
//    else
//        return search(root->right, key);
//}
//
//// 트리 메모리 해제
//void freeTree(Node* root) {
//    if (root != NULL) {
//        freeTree(root->left);
//        freeTree(root->right);
//        free(root);
//    }
//}
//
//int main() {
//
//    Node* root = NULL;
//
//    // 노드 삽입
//    int values[] = { 50, 30, 70, 20, 40, 60, 80 };
//    for (int i = 0; i < 7; i++)
//        root = insert(root, values[i]);
//
//    // 중위 순회 (정렬된 출력)
//    printf("중위 순회 결과 (정렬된 데이터): ");
//    inorder(root);
//    printf("\n");
//
//    // 값 검색
//    int key = 60;
//    Node* found = search(root, key);
//    if (found)
//        printf("%d를 찾았습니다!\n", key);
//    else
//        printf("%d는 트리에 없습니다.\n", key);
//
//    freeTree(root); // 메모리 해제
//
//    return 0;
//}
