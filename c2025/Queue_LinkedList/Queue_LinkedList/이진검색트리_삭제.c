//#include <stdio.h>
//#include <stdlib.h>
//
////��� ����ü
//typedef struct {
//	int data;  //��忡 ������ ������
//	struct Node* left;  //���� �ڽ� ���
//	struct Node* right; //������ �ڽ� ���
//}Node;
//
////��� ���� �Լ�
//Node* createNode(int value) {
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	if (newNode == NULL) {
//		puts("�޸� �Ҵ� ����!");
//		exit(1);
//	}
//	newNode->data = value;  //�� ��� �����Ͱ�
//	newNode->left = NULL;   //�ʱ�ȭ
//	newNode->right = NULL;  //�ʱ�ȭ
//	return newNode;  //�� ��� ��ȯ
//}
//
////��� ����
//Node* insert(Node* root, int value) {
//	//ó�� Ʈ���� �������(����� ���� ����)
//	if (root == NULL)  
//		return createNode(value);  //�� ��带 root�� ��ȯ
//
//	//��� ȣ��� ���������� - �ش� �ڽĳ�尡 NULL�϶� �� �ڸ��� �� ��� ����
//	if (value < root->data)
//		root->left = insert(root->left, value); //���� �����Ʈ�� ����
//	if (value > root->data)
//		root->right = insert(root->right, value); //������ �����Ʈ�� ����
//
//	return root; //����� ��Ʈ ��ȯ
//}
//
////���� ��ȸ(���� - ����(��Ʈ) - ������)
//void inOrder(Node* root) {
//	if (root != NULL) {
//		inOrder(root->left);
//		printf("%d ", root->data);
//		inOrder(root->right);
//	}
//}
//
////��� Ž��
//Node* search(Node* root, int key) {
//	//root�� ���ų� �� ���� ã�� ���̸� root ��ȯ(���� ����)
//	if (root == NULL || root->data == key)
//		return root;
//
//	if (key < root->data)
//		return search(root->left, key);
//	else
//		return search(root->right, key);
//}
//
////�ּҰ� ã��
//Node* findMin(Node* root) {
//	while (root->left != NULL)
//		root = root->left; //���� ��尪�� ã�Ƽ� root�� ����
//	return root;
//}
//
////��� ����
//Node* delete(Node* root, int key) {
//	if (root == NULL)
//		return root; //Ʈ���� ��������� �״�� ��ȯ
//
//	if (key < root->data) //ã�� ���� ��Ʈ���� ������ �������� 
//		root->left = delete(root->left, key);
//	else if (key > root->data)
//		root->right = delete(root->right, key);
//	else { //key == root->data, ���� ã��
//		if (root->left == NULL) { //���� �ڽ��� ����
//			Node* temp = root->right; //������ �ڽ��� �ӽú����� ����
//			free(root); //���� ��� ����
//			return temp;  //������ �ڽ� ��ȯ(�θ�� ����)
//		}
//		else if (root->right == NULL) { //������ �ڽ��� ����
//			Node* temp = root->left; 
//			free(root); 
//			return temp;  
//		}
//		else { //�ڽ��� �� �� �ִ� ���
//			Node* temp = findMin(root->right); //�����ʿ��� �ּҰ� ã��
//			root->data = temp->data;  //���� ��尪 ��ü
//			root->right = delete(root->right, temp->data); //�ּҰ� ��� ����
//		}
//	}
//	return root;
//}
//
//
////Ʈ�� �޸� ����
//void freeTree(Node* root) {
//	if (root != NULL) {
//		//��� ȣ��� �������� �޸� ����
//		freeTree(root->left);
//		freeTree(root->right);
//		free(root); //���� ��� ����
//	}
//}
//
//int main() {
//
//	Node* root = NULL; //root ��� ����
//
//	//��� ����
//	int values[] = {50, 30, 70, 20, 40, 60, 80, 90};
//	int size = sizeof(values) / sizeof(values[0]);
//
//	for (int i = 0; i < size; i++) {
//		root = insert(root, values[i]);
//	}
//
//	//���� ��ȸ
//	printf("���� ���� ���: ");
//	inOrder(root);
//	printf("\n");
//
//	//��� �˻�
//	int key = 40;
//	Node* found = search(root, key);
//	if (found)
//		printf("%d�� ã�ҽ��ϴ�.\n", key);
//	else
//		printf("%d�� Ʈ���� �����ϴ�.\n", key);
//
//	//��� ����
//	puts("70 ���� ��");
//	root = delete(root, 70);
//	inOrder(root);
//
//	//�޸� ����
//	freeTree(root);
//	return 0;
//}
//
