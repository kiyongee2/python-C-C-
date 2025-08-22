//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// å ����ü
//typedef struct {
//    int isbn;          // ISBN ��ȣ (���� Ű)
//    char title[50];    // ����
//    char author[30];   // ����
//} Book;
//
//// Ʈ�� ��� ����ü
//typedef struct Node {
//    Book data;
//    struct Node* left;
//    struct Node* right;
//} Node;
//
//// �� ��� ����
//Node* createNode(int isbn, const char* title, const char* author) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    newNode->data.isbn = isbn;
//    strcpy(newNode->data.title, title);
//    strcpy(newNode->data.author, author);
//    newNode->left = newNode->right = NULL;
//    return newNode;
//}
//
//// ���� (ISBN ����)
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
//// Ž�� (ISBN ����)
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
//// ���� ���� ��� ã��
//Node* findMin(Node* root) {
//    while (root && root->left != NULL)
//        root = root->left;
//    return root;
//}
//
//// ����
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
//// ���� ��ȸ (ISBN �� ���)
//void inorder(Node* root) {
//    if (root != NULL) {
//        inorder(root->left);
//        printf("ISBN:%d | ����:%s | ����:%s\n",
//            root->data.isbn, root->data.title, root->data.author);
//        inorder(root->right);
//    }
//}
//
//// �޸� ����
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
//        printf("\n===== ������ ���� �޴� =====\n");
//        printf("1. ���� �߰�\n");
//        printf("2. ���� �˻�\n");
//        printf("3. ���� ����\n");
//        printf("4. ��ü ���� ��� ���\n");
//        printf("5. ����\n");
//        printf("����: ");
//        scanf("%d", &choice);
//
//        switch (choice) {
//        case 1:
//            printf("\nISBN �Է�: ");
//            scanf("%d", &isbn);
//            getchar(); // ���� ����
//            printf("���� �Է�: ");
//            fgets(title, sizeof(title), stdin);
//            title[strcspn(title, "\n")] = '\0'; // ���� ����
//            printf("���� �Է�: ");
//            fgets(author, sizeof(author), stdin);
//            author[strcspn(author, "\n")] = '\0'; // ���� ����
//
//            root = insert(root, isbn, title, author);
//            printf("���� �߰� �Ϸ�!\n");
//            break;
//
//        case 2:
//            printf("\n�˻��� ISBN �Է�: ");
//            scanf("%d", &isbn);
//            {
//                Node* found = search(root, isbn);
//                if (found)
//                    printf("ISBN:%d | ����:%s | ����:%s\n",
//                        found->data.isbn, found->data.title, found->data.author);
//                else
//                    printf("�ش� ISBN�� ������ ã�� �� �����ϴ�.\n");
//            }
//            break;
//
//        case 3:
//            printf("\n������ ISBN �Է�: ");
//            scanf("%d", &isbn);
//            root = deleteNode(root, isbn);
//            printf("���� ó�� �Ϸ�!\n");
//            break;
//
//        case 4:
//            printf("\n��ü ���� ���:\n");
//            if (root == NULL)
//                printf("(��ϵ� ������ �����ϴ�)\n");
//            else
//                inorder(root);
//            break;
//
//        case 5:
//            printf("\n���α׷��� �����մϴ�.\n");
//            freeTree(root);
//            return 0;
//
//        default:
//            printf("�߸��� �����Դϴ�. �ٽ� �Է����ּ���.\n");
//        }
//    }
//}
