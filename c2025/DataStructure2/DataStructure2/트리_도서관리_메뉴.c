//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// 책 구조체
//typedef struct {
//    int isbn;          // ISBN 번호 (고유 키)
//    char title[50];    // 제목
//    char author[30];   // 저자
//} Book;
//
//// 트리 노드 구조체
//typedef struct Node {
//    Book data;
//    struct Node* left;
//    struct Node* right;
//} Node;
//
//// 새 노드 생성
//Node* createNode(int isbn, const char* title, const char* author) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    newNode->data.isbn = isbn;
//    strcpy(newNode->data.title, title);
//    strcpy(newNode->data.author, author);
//    newNode->left = newNode->right = NULL;
//    return newNode;
//}
//
//// 삽입 (ISBN 기준)
//Node* insert(Node* root, int isbn, const char* title, const char* author) {
//    if (root == NULL) return createNode(isbn, title, author);
//
//    if (isbn < root->data.isbn)
//        root->left = insert(root->left, isbn, title, author);
//    else if (isbn > root->data.isbn)
//        root->right = insert(root->right, isbn, title, author);
//
//    return root;
//}
//
//// 탐색 (ISBN 기준)
//Node* search(Node* root, int isbn) {
//    if (root == NULL || root->data.isbn == isbn)
//        return root;
//
//    if (isbn < root->data.isbn)
//        return search(root->left, isbn);
//    else
//        return search(root->right, isbn);
//}
//
//// 가장 작은 노드 찾기
//Node* findMin(Node* root) {
//    while (root && root->left != NULL)
//        root = root->left;
//    return root;
//}
//
//// 삭제
//Node* deleteNode(Node* root, int isbn) {
//    if (root == NULL) return root;
//
//    if (isbn < root->data.isbn) {
//        root->left = deleteNode(root->left, isbn);
//    }
//    else if (isbn > root->data.isbn) {
//        root->right = deleteNode(root->right, isbn);
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
//            root->right = deleteNode(root->right, temp->data.isbn);
//        }
//    }
//    return root;
//}
//
//// 중위 순회 (ISBN 순 출력)
//void inorder(Node* root) {
//    if (root != NULL) {
//        inorder(root->left);
//        printf("ISBN:%d | 제목:%s | 저자:%s\n",
//            root->data.isbn, root->data.title, root->data.author);
//        inorder(root->right);
//    }
//}
//
//// 메모리 해제
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
//    int choice, isbn;
//    char title[50], author[30];
//
//    while (1) {
//        printf("\n===== 도서관 관리 메뉴 =====\n");
//        printf("1. 도서 추가\n");
//        printf("2. 도서 검색\n");
//        printf("3. 도서 삭제\n");
//        printf("4. 전체 도서 목록 출력\n");
//        printf("5. 종료\n");
//        printf("선택: ");
//        scanf("%d", &choice);
//
//        switch (choice) {
//        case 1:
//            printf("\nISBN 입력: ");
//            scanf("%d", &isbn);
//            getchar(); // 버퍼 비우기
//            printf("제목 입력: ");
//            fgets(title, sizeof(title), stdin);
//            title[strcspn(title, "\n")] = '\0'; // 개행 제거
//            printf("저자 입력: ");
//            fgets(author, sizeof(author), stdin);
//            author[strcspn(author, "\n")] = '\0'; // 개행 제거
//
//            root = insert(root, isbn, title, author);
//            printf("도서 추가 완료!\n");
//            break;
//
//        case 2:
//            printf("\n검색할 ISBN 입력: ");
//            scanf("%d", &isbn);
//            {
//                Node* found = search(root, isbn);
//                if (found)
//                    printf("ISBN:%d | 제목:%s | 저자:%s\n",
//                        found->data.isbn, found->data.title, found->data.author);
//                else
//                    printf("해당 ISBN의 도서를 찾을 수 없습니다.\n");
//            }
//            break;
//
//        case 3:
//            printf("\n삭제할 ISBN 입력: ");
//            scanf("%d", &isbn);
//            root = deleteNode(root, isbn);
//            printf("삭제 처리 완료!\n");
//            break;
//
//        case 4:
//            printf("\n전체 도서 목록:\n");
//            if (root == NULL)
//                printf("(등록된 도서가 없습니다)\n");
//            else
//                inorder(root);
//            break;
//
//        case 5:
//            printf("\n프로그램을 종료합니다.\n");
//            freeTree(root);
//            return 0;
//
//        default:
//            printf("잘못된 선택입니다. 다시 입력해주세요.\n");
//        }
//    }
//}
