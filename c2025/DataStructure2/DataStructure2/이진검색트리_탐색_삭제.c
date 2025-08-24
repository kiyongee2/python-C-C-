//#include <stdio.h>
//#include <stdlib.h>
//
//// ��� ����ü
//typedef struct Node {
//    int data;
//    struct Node* left;
//    struct Node* right;
//} Node;
//
//// �� ��� ����
//Node* createNode(int value) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (newNode == NULL) {
//        printf("�޸� �Ҵ� ����!\n");
//        exit(1);
//    }
//    newNode->data = value;
//    newNode->left = NULL;
//    newNode->right = NULL;
//
//    return newNode;
//}
//
//// ����
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
//// �˻�
//Node* search(Node* root, int key) {
//    if (root == NULL || root->data == key)
//        return root;
//    if (key < root->data)
//        return search(root->left, key);
//    else
//        return search(root->right, key);
//}
//
//// Ʈ�� ����
//int height(Node* root) {
//    if (root == NULL) return -1;
//    int leftH = height(root->left);
//    int rightH = height(root->right);
//    return (leftH > rightH ? leftH : rightH) + 1;
//}
//
//// �ּҰ� ã��
//Node* findMin(Node* root) {
//    while (root->left != NULL)
//        root = root->left;
//    return root;
//}
//
//// ����
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
//        // (1) �ڽ��� ���� ���
//        if (root->left == NULL && root->right == NULL) {
//            free(root);
//            return NULL;
//        }
//        // (2) �ڽ��� �ϳ��� �ִ� ���
//        else if (root->left == NULL) { //���� �ڽ��� ����
//            Node* temp = root->right;
//            free(root); //���� ��� ����
//            return temp; //������ �ڽ� ��ȯ(�θ�� ����)
//        }
//        else if (root->right == NULL) { //������ �ڽ��� ����
//            Node* temp = root->left;
//            free(root);
//            return temp; //���� �ڽ� ��ȯ
//        }
//        // (3) �ڽ��� �� �� �ִ� ���
//        else {
//            Node* temp = findMin(root->right); //������ �ּҰ� ã��
//            root->data = temp->data;  //���� ��尪 ��ü
//            root->right = delete(root->right, temp->data); //�ּҰ� ��� ����
//        }
//    }
//    return root;
//}
//
//// ��ȸ
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
//    // ������ ����
//    int values[] = { 50, 30, 70, 20, 40, 60, 80 };
//    for (int i = 0; i < 7; i++) {
//        root = insert(root, values[i]);
//    }
//
//    printf("���� ��ȸ: ");
//    inorder(root);
//    printf("\n");
//
//    // �˻�
//    int key = 60;
//    Node* found = search(root, key);
//    if (found) printf("%d ã��!\n", key);
//    else printf("%d ����!\n", key);
//
//    // ����
//    root = delete(root, 30);
//    printf("30 ���� �� ���� ��ȸ: ");
//    inorder(root);
//    printf("\n");
//
//    // ���� ���
//    printf("Ʈ�� ����: %d\n", height(root));
//
//    return 0;
//}
