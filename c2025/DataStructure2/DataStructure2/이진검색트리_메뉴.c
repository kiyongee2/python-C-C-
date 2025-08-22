//#define _CRT_SECURE_NO_WARNINGS
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
//Node* createNode(int data) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    newNode->data = data;
//    newNode->left = newNode->right = NULL;
//    return newNode;
//}
//
//// ����
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
//// ��ȸ �Լ���
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
//// �޴� ���
//void printMenu() {
//    printf("\n=== ���� Ž�� Ʈ�� �޴� ===\n");
//    printf("1. ��� ����\n");
//    printf("2. ��� ����\n");
//    printf("3. ��� �˻�\n");
//    printf("4. ���� ��ȸ ���\n");
//    printf("5. ���� ��ȸ ���\n");
//    printf("6. ���� ��ȸ ���\n");
//    printf("7. Ʈ�� ���� Ȯ��\n");
//    printf("8. ���α׷� ����\n");
//    printf("==========================\n");
//    printf("�޴� ����: ");
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
//        case 1: // ��� ����
//            printf("������ �� �Է�: ");
//            scanf("%d", &value);
//            root = insert(root, value);
//            printf("%d ���� �Ϸ�!\n", value);
//            break;
//
//        case 2: // ��� ����
//            printf("������ �� �Է�: ");
//            scanf("%d", &value);
//            if (search(root, value)) {
//                root = delete(root, value);
//                printf("%d ���� �Ϸ�!\n", value);
//            }
//            else {
//                printf("%d�� Ʈ���� �������� �ʽ��ϴ�.\n", value);
//            }
//            break;
//
//        case 3: // ��� �˻�
//            printf("�˻��� �� �Է�: ");
//            scanf("%d", &value);
//            result = search(root, value);
//            if (result) {
//                printf("%d�� Ʈ���� �����մϴ�.\n", value);
//            }
//            else {
//                printf("%d�� Ʈ���� �������� �ʽ��ϴ�.\n", value);
//            }
//            break;
//
//        case 4: // ���� ��ȸ
//            printf("���� ��ȸ ���: ");
//            inorder(root);
//            printf("\n");
//            break;
//
//        case 5: // ���� ��ȸ
//            printf("���� ��ȸ ���: ");
//            preorder(root);
//            printf("\n");
//            break;
//
//        case 6: // ���� ��ȸ
//            printf("���� ��ȸ ���: ");
//            postorder(root);
//            printf("\n");
//            break;
//
//        case 7: // Ʈ�� ����
//            printf("Ʈ�� ����: %d\n", height(root));
//            break;
//
//        case 8: // ����
//            printf("���α׷��� �����մϴ�.\n");
//            return 0;
//
//        default:
//            printf("�߸��� �����Դϴ�. 1~8 ������ ���ڸ� �Է��ϼ���.\n");
//        }
//    }
//
//    return 0;
//}