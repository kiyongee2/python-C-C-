//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct {
//	int isbn;       //isbn
//	char title[50]; 
//	char author[30];
//}Book;
//
//typedef struct {
//	Book data;
//	struct Node* left;
//	struct Node* right;
//}Node;
//
//Node* createNode(int isbn, const char* title, const char* author) {
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	newNode->data.isbn = isbn;
//	strcpy(newNode->data.title, title);
//	strcpy(newNode->data.author, author);
//	newNode->left = NULL;
//	newNode->right = NULL;
//	return newNode;
//}
//
//Node* insert(Node* root, int isbn, const char* title, const char* author) {
//	if (root == NULL)
//		return createNode(isbn, title, author);
//
//	if (isbn < root->data.isbn)
//		root->left = insert(root->left, isbn, title, author);
//	else if (isbn > root->data.isbn)
//		root->right = insert(root->right, isbn, title, author);
//
//	return root;
//}
//
//void inOrder(Node* root) {
//	if (root != NULL) {
//		inOrder(root->left);
//		printf("ISBN:%d | 제목: %s | 저자: %s\n",
//			root->data.isbn, root->data.title, root->data.author);
//		inOrder(root->right);
//	}
//}
//
////탐색
//Node* search(Node* root, int isbn) {
//	if (root == NULL || root->data.isbn == isbn)
//		return root;
//
//	if (isbn < root->data.isbn)
//		return search(root->left, isbn);
//	else
//		return search(root->right, isbn);
//}
//
//void freeTree(Node* root) {
//	if (root != NULL) {
//		freeTree(root->left);
//		freeTree(root->right);
//		free(root);
//	}
//}
//
//int main()
//{
//	Node* root = NULL;
//
//	//도서 추가
//	root = insert(root, 9791001, "C 프로그래밍", "우영우");
//	root = insert(root, 9791003, "자료구조", "장그래");
//	root = insert(root, 9791002, "알고리즘", "오상식");
//
//	printf("도서 전체 목록(ISBN 순):\n");
//	inOrder(root);
//	printf("=======================================================\n");
//
//	//도서 검색
//	int searchIsbn = 9791002;
//	Node* result = search(root, searchIsbn);
//	if (result != NULL)
//		printf("ISBN:%d | 제목: %s | 저자: %s\n",
//			result->data.isbn, result->data.title, result->data.author);
//	else
//		printf("ISBN:%d 책을 찾을 수 없습니다.\n", searchIsbn);
//
//	freeTree(root);
//
//	return 0;
//}