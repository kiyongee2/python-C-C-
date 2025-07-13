//#include <stdio.h>
//#include <stdlib.h>
//
//// Ʈ�� ��� ����
//typedef struct Node {
//    int data;
//    struct Node* left;
//    struct Node* right;
//} Node;
//
//// ��� ���� �Լ�
//Node* createNode(int data) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (!newNode) {
//        printf("�޸� �Ҵ� ����!\n");
//        exit(1);
//    }
//    newNode->data = data;
//    newNode->left = newNode->right = NULL;
//    return newNode;
//}
//
//// ���� Ʈ���� ��� ���� (���ĵ� ���� Ʈ��)
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
//// ���� ��ȸ (���� �� ���� �� ������)
//void inorder(Node* root) {
//    if (root != NULL) {
//        inorder(root->left);
//        printf("%d ", root->data);
//        inorder(root->right);
//    }
//}
//
//// ���� ��ȸ (���� �� ������ �� ����)
//void postorder(Node* root) {
//    if (root != NULL) {
//        postorder(root->left);
//        postorder(root->right);
//        printf("%d ", root->data);
//    }
//}
//
//// ���� ��ȸ (���� �� ���� �� ������)
//void preorder(Node* root) {
//    if (root != NULL) {
//        printf("%d ", root->data);
//        preorder(root->left);
//        preorder(root->right);
//    }
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
//    Node* root = NULL;
//
//    // Ʈ���� ������ ����
//    root = insert(root, 50);
//    insert(root, 30);
//    insert(root, 70);
//    insert(root, 20);
//    insert(root, 40);
//    insert(root, 60);
//    insert(root, 80);
//
//    // ���
//    printf("���� ��ȸ (�������� ����): ");
//    inorder(root);
//    printf("\n");
//
//    printf("���� ��ȸ: ");
//    preorder(root);
//    printf("\n");
//
//    printf("���� ��ȸ: ");
//    postorder(root);
//    printf("\n");
//
//    freeTree(root); // �޸� ����
//
//    return 0;
//}
