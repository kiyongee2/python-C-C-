//#include <stdio.h>
//#include <stdlib.h>
//
//// 트리 노드 정의
//typedef struct Node {
//    int data;
//    struct Node* left;
//    struct Node* right;
//} Node;
//
//// 노드 생성 함수
//Node* createNode(int data) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (!newNode) {
//        printf("메모리 할당 실패!\n");
//        exit(1);
//    }
//    newNode->data = data;
//    newNode->left = newNode->right = NULL;
//    return newNode;
//}
//
//// 이진 트리에 노드 삽입 (정렬된 이진 트리)
//Node* insert(Node* root, int data) {
//    if (root == NULL) return createNode(data);
//
//    if (data < root->data)
//        root->left = insert(root->left, data);
//    else
//        root->right = insert(root->right, data);
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
//// 후위 순회 (왼쪽 → 오른쪽 → 현재)
//void postorder(Node* root) {
//    if (root != NULL) {
//        postorder(root->left);
//        postorder(root->right);
//        printf("%d ", root->data);
//    }
//}
//
//// 전위 순회 (현재 → 왼쪽 → 오른쪽)
//void preorder(Node* root) {
//    if (root != NULL) {
//        printf("%d ", root->data);
//        preorder(root->left);
//        preorder(root->right);
//    }
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
//    Node* root = NULL;
//
//    // 트리에 데이터 삽입
//    root = insert(root, 50);
//    insert(root, 30);
//    insert(root, 70);
//    insert(root, 20);
//    insert(root, 40);
//    insert(root, 60);
//    insert(root, 80);
//
//    // 출력
//    printf("중위 순회 (오름차순 정렬): ");
//    inorder(root);
//    printf("\n");
//
//    printf("전위 순회: ");
//    preorder(root);
//    printf("\n");
//
//    printf("후위 순회: ");
//    postorder(root);
//    printf("\n");
//
//    freeTree(root); // 메모리 해제
//
//    return 0;
//}
