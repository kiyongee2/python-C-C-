//#include <stdio.h>
//#include <stdlib.h>
//
//// 노드 구조체
//typedef struct Node {
//    int data;
//    struct Node* left;
//    struct Node* right;
//} Node;
//
//// 새 노드 생성
//Node* createNode(int value) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (newNode == NULL) {
//        printf("메모리 할당 실패!\n");
//        exit(1);
//    }
//    newNode->data = value;
//    newNode->left = NULL;
//    newNode->right = NULL;
//
//    return newNode;
//}
//
//// 삽입
//Node* insert(Node* root, int value) {
//    if (root == NULL) 
//        return createNode(value);
//
//    if (value < root->data)
//        root->left = insert(root->left, value);
//    else if (value > root->data)
//        root->right = insert(root->right, value);
//
//    return root;
//}
//
//// 검색
//Node* search(Node* root, int key) {
//    if (root == NULL || root->data == key)
//        return root;
//    if (key < root->data)
//        return search(root->left, key);
//    else
//        return search(root->right, key);
//}
//
//// 트리 높이
//int height(Node* root) {
//    if (root == NULL) return -1;
//    int leftH = height(root->left);
//    int rightH = height(root->right);
//    return (leftH > rightH ? leftH : rightH) + 1;
//}
//
//// 최소값 찾기
//Node* findMin(Node* root) {
//    while (root->left != NULL)
//        root = root->left;
//    return root;
//}
//
//// 삭제
//Node* delete(Node* root, int key) {
//    if (root == NULL) return root;
//
//    if (key < root->data) {
//        root->left = delete(root->left, key);
//    }
//    else if (key > root->data) {
//        root->right = delete(root->right, key);
//    }
//    else {
//        // (1) 자식이 없는 경우
//        if (root->left == NULL && root->right == NULL) {
//            free(root);
//            return NULL;
//        }
//        // (2) 자식이 하나만 있는 경우
//        else if (root->left == NULL) { //왼쪽 자식이 없음
//            Node* temp = root->right;
//            free(root); //현재 노드 삭제
//            return temp; //오른쪽 자식 반환(부모와 연결)
//        }
//        else if (root->right == NULL) { //오른쪽 자식이 없음
//            Node* temp = root->left;
//            free(root);
//            return temp; //왼쪽 자식 반환
//        }
//        // (3) 자식이 둘 다 있는 경우
//        else {
//            Node* temp = findMin(root->right); //오른쪽 최소값 찾기
//            root->data = temp->data;  //현재 노드값 교체
//            root->right = delete(root->right, temp->data); //최소값 노드 삭제
//        }
//    }
//    return root;
//}
//
//// 순회
//void inorder(Node* root) {
//    if (root != NULL) {
//        inorder(root->left);
//        printf("%d ", root->data);
//        inorder(root->right);
//    }
//}
//
//int main() {
//
//    Node* root = NULL;
//
//    // 데이터 삽입
//    int values[] = { 50, 30, 70, 20, 40, 60, 80 };
//    for (int i = 0; i < 7; i++) {
//        root = insert(root, values[i]);
//    }
//
//    printf("중위 순회: ");
//    inorder(root);
//    printf("\n");
//
//    // 검색
//    int key = 60;
//    Node* found = search(root, key);
//    if (found) printf("%d 찾음!\n", key);
//    else printf("%d 없음!\n", key);
//
//    // 삭제
//    root = delete(root, 30);
//    printf("30 삭제 후 중위 순회: ");
//    inorder(root);
//    printf("\n");
//
//    // 높이 출력
//    printf("트리 높이: %d\n", height(root));
//
//    return 0;
//}
