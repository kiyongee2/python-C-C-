//#include <stdio.h>
//#include <stdlib.h>
//
//// ��� ���� ����
//typedef struct Node {
//    int data;
//    struct Node* left;
//    struct Node* right;
//} Node;
//
//// ��� ���� �Լ�
//Node* createNode(int value) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (newNode == NULL) {
//        printf("�޸� �Ҵ� ����!\n");
//        exit(1);
//    }
//    newNode->data = value;
//    newNode->left = newNode->right = NULL;
//    return newNode;
//}
//
//// ���� �˻� Ʈ���� ����
//Node* insert(Node* root, int value) {
//    if (root == NULL) return createNode(value);
//
//    if (value < root->data)
//        root->left = insert(root->left, value);
//    else if (value > root->data)
//        root->right = insert(root->right, value);
//    // �ߺ��� ���� (���Ѵٸ� ī��Ʈ ó�� ����)
//
//    return root;
//}
//
//// ���� ��ȸ (���� �� ���� �� ������)
//void inorder(Node* root) {
//    if (root != NULL) {
//        inorder(root->left);
//        printf("%d ", root->data);
//        inorder(root->right);
//    }
//}
//
//// ��� Ž��
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
//// Ʈ�� �޸� ����
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
//    // ��� ����
//    int values[] = { 50, 30, 70, 20, 40, 60, 80 };
//    for (int i = 0; i < 7; i++)
//        root = insert(root, values[i]);
//
//    // ���� ��ȸ (���ĵ� ���)
//    printf("���� ��ȸ ��� (���ĵ� ������): ");
//    inorder(root);
//    printf("\n");
//
//    // �� �˻�
//    int key = 60;
//    Node* found = search(root, key);
//    if (found)
//        printf("%d�� ã�ҽ��ϴ�!\n", key);
//    else
//        printf("%d�� Ʈ���� �����ϴ�.\n", key);
//
//    freeTree(root); // �޸� ����
//
//    return 0;
//}
