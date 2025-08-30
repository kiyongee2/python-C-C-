//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
///*
//   ���� ��� "apple" �̶�� ���ڿ��� ���´ٸ�:
//   hash = 0 (�ʱⰪ)
//   'a'(97) ó�� �� hash = 0*31 + 97 = 97
//   'p'(112) ó�� �� hash = 97*31 + 112 = 3119
//   'p'(112) ó�� �� hash = 3119*31 + 112 = 96801
//   'l'(108) ó�� �� hash = 96801*31 + 108 = 3000949
//   'e'(101) ó�� �� hash = 3000949*31 + 101 = 93029520
//
//  �������� 93029520 % TABLE_SIZE �ؼ�
//  �ؽ� ���̺��� �ε����� ��ȯ�մϴ�
//* 
//* 
//  �� 31�� ���ұ�?
//  31�� �Ҽ�(prime number) �� �浹�� �پ��
//
// (hash * 31) �� ���ڿ��� ������ �ݿ�
// ��: "abc" �� "cab" �� ���� �������� �ٸ� �ؽð� ����
//
// 31�� 2�������� (hash << 5) - hash (�� 32�� - �ڱ� �ڽ�)���� ����ȭ ���� �� ����
// �׷��� ���� �ؽ� �Լ� �������� 31�� ���� ����մϴ�
//
//*/
//
//#define TABLE_SIZE 10
//
//// ��� ����ü (ü�̴�)
//typedef struct Node {
//    char* key;  //Ű
//    int value;  //��
//    struct Node* next; //����� ���� �ּ�
//} Node;
//
//Node* hashTable[TABLE_SIZE];
//
//// �ؽ� �Լ� (���ڿ� �� �ε���)
//unsigned int hash(const char* key) {
//    unsigned int hash = 0; //hsah �� ������ ����
//    while (*key) { // ���ڿ� ��('\0')���� �ݺ�
//        // ���� �ؽð��� 31�� ���ϰ� ���� ������ �ƽ�Ű ���� ����
//        // *key++ : ���� ���ڸ� ����� �� ���� ���ڷ� �̵�
//        hash = (hash * 31) + *key++; // 
//    }
//    return hash % TABLE_SIZE;  // ���̺� ũ�⿡ �°� �ε��� ���� ����
//}
//
//// ���� �Լ�
//void insert(const char* key, int value) {
//    unsigned int index = hash(key); //key�� �ؽ� �� index ����
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (!newNode) {
//        printf("�޸� �Ҵ� ����!\n");
//        exit(1);
//    }
//
//    newNode->key = _strdup(key);  //key ���ڿ� ����
//    newNode->value = value;  //�� ����
//    newNode->next = hashTable[index];  //���� ���Ḯ��Ʈ �տ� ����
//    hashTable[index] = newNode; //�� ��带 ü�� �� �տ� ���
//}
//
//// �˻� �Լ�
//int search(const char* key) {
//    unsigned int index = hash(key);
//    Node* current = hashTable[index];  //�ش� ��Ŷ�� ù ������ Ž�� ����
//    while (current) {
//        if (strcmp(current->key, key) == 0) {  //key ��ġ Ȯ��
//            return current->value; // ã��
//        }
//        current = current->next; //���� ���� �̵�
//    }
//    return -1; // �� ã��
//}
//
//// �ؽ� ���̺� ���
//void printTable() {
//    for (int i = 0; i < TABLE_SIZE; i++) {
//        printf("[%d] : ", i);
//        Node* current = hashTable[i];
//        while (current) {
//            printf("(%s, %d) -> ", current->key, current->value);
//            current = current->next;
//        }
//        printf("NULL\n");
//    }
//}
//
//// ���� �׽�Ʈ
//int main() {
//    insert("apple", 100);
//    insert("banana", 200);
//    insert("grape", 300);
//    insert("orange", 400);
//    insert("melon", 500);
//
//    printTable();
//
//    printf("�˻� ���: apple �� %d\n", search("apple"));
//    printf("�˻� ���: banana �� %d\n", search("banana"));
//    printf("�˻� ���: kiwi �� %d\n", search("kiwi"));
//
//    return 0;
//}
