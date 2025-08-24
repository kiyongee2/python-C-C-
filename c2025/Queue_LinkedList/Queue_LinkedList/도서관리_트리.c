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
//		printf("ISBN:%d | ����: %s | ����: %s\n",
//			root->data.isbn, root->data.title, root->data.author);
//		inOrder(root->right);
//	}
//}
//
////Ž��
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
//	//���� �߰�
//	root = insert(root, 9791001, "C ���α׷���", "�쿵��");
//	root = insert(root, 9791003, "�ڷᱸ��", "��׷�");
//	root = insert(root, 9791002, "�˰���", "�����");
//
//	printf("���� ��ü ���(ISBN ��):\n");
//	inOrder(root);
//	printf("=======================================================\n");
//
//	//���� �˻�
//	int searchIsbn = 9791002;
//	Node* result = search(root, searchIsbn);
//	if (result != NULL)
//		printf("ISBN:%d | ����: %s | ����: %s\n",
//			result->data.isbn, result->data.title, result->data.author);
//	else
//		printf("ISBN:%d å�� ã�� �� �����ϴ�.\n", searchIsbn);
//
//	freeTree(root);
//
//	return 0;
//}