//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// 책 구조체
//typedef struct {
//    int isbn;          // 책 ISBN (고유번호, 키 값)
//    char title[50];    // 책 제목
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
//// 중위 순회 (ISBN 순으로 정렬 출력)
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
//
//    // 도서 추가
//    root = insert(root, 9781001, "C 프로그래밍", "김철수");
//    root = insert(root, 9781003, "자료구조", "이영희");
//    root = insert(root, 9781002, "알고리즘", "박민수");
//
//    printf("도서 전체 목록 (ISBN 순):\n");
//    inorder(root);
//
//    //도서 검색
//    int searchIsbn = 9781002;
//    Node* result = search(root, searchIsbn);
//    if (result != NULL)
//        printf("\n검색 결과 → ISBN:%d | 제목:%s | 저자:%s\n",
//            result->data.isbn, result->data.title, result->data.author);
//    else
//        printf("\nISBN %d 책을 찾을 수 없습니다.\n", searchIsbn);
//
//    // 메모리 해제
//    freeTree(root);
//       
//    return 0;
//}
