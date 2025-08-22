//#define _CRT_SECURE_NO_WARNINGS
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
//Node* createNode(int data) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    newNode->data = data;
//    newNode->left = newNode->right = NULL;
//    return newNode;
//}
//
//// 삽입
//Node* insert(Node* root, int data) {
//    if (root == NULL) return createNode(data);
//
//    if (data < root->data)
//        root->left = insert(root->left, data);
//    else if (data > root->data)
//        root->right = insert(root->right, data);
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
//        if (root->left == NULL && root->right == NULL) {
//            free(root);
//            return NULL;
//        }
//        else if (root->left == NULL) {
//            Node* temp = root->right;
//            free(root);
//            return temp;
//        }
//        else if (root->right == NULL) {
//            Node* temp = root->left;
//            free(root);
//            return temp;
//        }
//        else {
//            Node* temp = findMin(root->right);
//            root->data = temp->data;
//            root->right = delete(root->right, temp->data);
//        }
//    }
//    return root;
//}
//
//// 순회 함수들
//void inorder(Node* root) {
//    if (root != NULL) {
//        inorder(root->left);
//        printf("%d ", root->data);
//        inorder(root->right);
//    }
//}
//
//void preorder(Node* root) {
//    if (root != NULL) {
//        printf("%d ", root->data);
//        preorder(root->left);
//        preorder(root->right);
//    }
//}
//
//void postorder(Node* root) {
//    if (root != NULL) {
//        postorder(root->left);
//        postorder(root->right);
//        printf("%d ", root->data);
//    }
//}
//
//// 메뉴 출력
//void printMenu() {
//    printf("\n=== 이진 탐색 트리 메뉴 ===\n");
//    printf("1. 노드 삽입\n");
//    printf("2. 노드 삭제\n");
//    printf("3. 노드 검색\n");
//    printf("4. 중위 순회 출력\n");
//    printf("5. 전위 순회 출력\n");
//    printf("6. 후위 순회 출력\n");
//    printf("7. 트리 높이 확인\n");
//    printf("8. 프로그램 종료\n");
//    printf("==========================\n");
//    printf("메뉴 선택: ");
//}
//
//int main() {
//    Node* root = NULL;
//    int choice, value;
//    Node* result;
//
//    while (1) {
//        printMenu();
//        scanf("%d", &choice);
//
//        switch (choice) {
//        case 1: // 노드 삽입
//            printf("삽입할 값 입력: ");
//            scanf("%d", &value);
//            root = insert(root, value);
//            printf("%d 삽입 완료!\n", value);
//            break;
//
//        case 2: // 노드 삭제
//            printf("삭제할 값 입력: ");
//            scanf("%d", &value);
//            if (search(root, value)) {
//                root = delete(root, value);
//                printf("%d 삭제 완료!\n", value);
//            }
//            else {
//                printf("%d는 트리에 존재하지 않습니다.\n", value);
//            }
//            break;
//
//        case 3: // 노드 검색
//            printf("검색할 값 입력: ");
//            scanf("%d", &value);
//            result = search(root, value);
//            if (result) {
//                printf("%d는 트리에 존재합니다.\n", value);
//            }
//            else {
//                printf("%d는 트리에 존재하지 않습니다.\n", value);
//            }
//            break;
//
//        case 4: // 중위 순회
//            printf("중위 순회 결과: ");
//            inorder(root);
//            printf("\n");
//            break;
//
//        case 5: // 전위 순회
//            printf("전위 순회 결과: ");
//            preorder(root);
//            printf("\n");
//            break;
//
//        case 6: // 후위 순회
//            printf("후위 순회 결과: ");
//            postorder(root);
//            printf("\n");
//            break;
//
//        case 7: // 트리 높이
//            printf("트리 높이: %d\n", height(root));
//            break;
//
//        case 8: // 종료
//            printf("프로그램을 종료합니다.\n");
//            return 0;
//
//        default:
//            printf("잘못된 선택입니다. 1~8 사이의 숫자를 입력하세요.\n");
//        }
//    }
//
//    return 0;
//}