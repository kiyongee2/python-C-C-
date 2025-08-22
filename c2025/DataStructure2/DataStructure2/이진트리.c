//#include <stdio.h>
//#include <stdlib.h>
//
//// 트리 노드 정의
//typedef struct Node {
//    int data;  //노드에 저장할 데이터
//    struct Node* left;  //왼쪽 자식 노드
//    struct Node* right; //오른쪽 자식 노드
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
//    newNode->left = NULL;
//    newNode->right = NULL;
//    return newNode;
//}
//
//// 이진 트리에 노드 삽입 (정렬된 이진 트리)
//Node* insert(Node* root, int data) {
//    if (root == NULL) {
//        return createNode(data); //새 노드 반환
//    }
//
//    //재귀 호출
//    if (data < root->data)
//        root->left = insert(root->left, data); //왼쪽 서브루트에 삽입
//    else
//        root->right = insert(root->right, data); //오른쪽 서브루트에 삽입
//
//    return root; //변경된 루트 반환
//}
//
//// 전위 순회 (루트 → 왼쪽 → 오른쪽) 
//void preorder(Node* root) {
//    //재귀 함수 호출
//    if (root != NULL) {
//        printf("%d ", root->data);
//        preorder(root->left);
//        preorder(root->right);
//    }
//}
//
//// 중위 순회 (왼쪽 → 루트 → 오른쪽)
//void inorder(Node* root) {
//    if (root != NULL) {
//        inorder(root->left);
//        printf("%d ", root->data);
//        inorder(root->right);
//    }
//}
//
//// 후위 순회 (왼쪽 → 오른쪽 → 루트)
//void postorder(Node* root) {
//    if (root != NULL) {
//        postorder(root->left);
//        postorder(root->right);
//        printf("%d ", root->data);
//    }
//}
//
//// 트리 메모리 해제
//void freeTree(Node* root) {
//    //재귀 함수 호출
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
