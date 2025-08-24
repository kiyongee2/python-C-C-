//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define TABLE_SIZE 20
//
//// ��� ����ü (ü�̴� ���)
//typedef struct Node {
//    char* word;       // ���
//    char* meaning;    // ����
//    struct Node* next;
//} Node;
//
//Node* hashTable[TABLE_SIZE];
//
//// �ؽ� �Լ� (���ڿ� �� �ε���)
//unsigned int hash(const char* key) {
//    unsigned int h = 0;
//    while (*key) {
//        h = (h * 31) + *key++;
//    }
//    return h % TABLE_SIZE;
//}
//
//// �ܾ� ���� �Լ�
//void insert(const char* word, const char* meaning) {
//    unsigned int index = hash(word);
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    newNode->word = _strdup(word);        
//    newNode->meaning = _strdup(meaning);  // �ǹ̵� ����
//    newNode->next = hashTable[index];
//    hashTable[index] = newNode;
//}
//
//// �ܾ� �˻� �Լ�
//char* search(const char* word) {
//    unsigned int index = hash(word);
//    Node* current = hashTable[index];
//    while (current) {
//        if (strcmp(current->word, word) == 0) {
//            return current->meaning;
//        }
//        current = current->next;
//    }
//    return NULL; // �� ã��
//}
//
//// ���� ���
//void printDictionary() {
//    printf("==== �ؽ� ��� ��� ���� ====\n");
//    for (int i = 0; i < TABLE_SIZE; i++) {
//        Node* current = hashTable[i];
//        while (current) {
//            printf("%s : %s\n", current->word, current->meaning);
//            current = current->next;
//        }
//    }
//    printf("============================\n");
//}
//
//// ���� �Լ�
//int main() {
//    // �ܾ� ����
//    insert("Array", "���ӵ� �޸� ������ �����͸� �����ϴ� �ڷᱸ��");
//    insert("Stack", "���Լ���(LIFO) ����� �ڷᱸ��");
//    insert("Queue", "���Լ���(FIFO) ����� �ڷᱸ��");
//    insert("Tree", "������ ������ ǥ���ϴ� �ڷᱸ��");
//    insert("Hash", "Ű�� �ؽ� �Լ��� ��ȯ�� ������ �˻��ϴ� �ڷᱸ��");
//
//    // ���� ���
//    printDictionary();
//
//    // �˻� �׽�Ʈ
//    char* term = "Stack";
//    char* meaning = search(term);
//    if (meaning) {
//        printf("\n�˻� ��� �� %s : %s\n", term, meaning);
//    }
//    else {
//        printf("\n'%s' �ܾ ã�� �� �����ϴ�.\n", term);
//    }
//
//    return 0;
//}
