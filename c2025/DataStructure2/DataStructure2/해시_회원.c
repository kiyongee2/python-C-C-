//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define TABLE_SIZE 10
//
//typedef struct Node {
//    char* name;
//    int id;
//    struct Node* next;
//} Node;
//
//Node* hashTable[TABLE_SIZE];
//
//// 해시 함수 (이름 문자열 → 인덱스)
//unsigned int hash(const char* key) {
//    unsigned int h = 0;
//    while (*key) {
//        h = (h * 31) + *key++;
//    }
//    return h % TABLE_SIZE;
//}
//
//// 삽입 함수
//void insert(const char* name, int id) {
//    unsigned int index = hash(name);
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    newNode->name = _strdup(name);  // Visual Studio에서는 _strdup 사용
//    newNode->id = id;
//    newNode->next = hashTable[index];
//    hashTable[index] = newNode;
//}
//
//// 검색 함수
//int search(const char* name) {
//    unsigned int index = hash(name);
//    Node* current = hashTable[index];
//    while (current) {
//        if (strcmp(current->name, name) == 0) {
//            return current->id;
//        }
//        current = current->next;
//    }
//    return -1; // 못 찾음
//}
//
//// 테이블 출력
//void printTable() {
//    for (int i = 0; i < TABLE_SIZE; i++) {
//        printf("[%d] : ", i);
//        Node* current = hashTable[i];
//        while (current) {
//            printf("(%s, %d) -> ", current->name, current->id);
//            current = current->next;
//        }
//        printf("NULL\n");
//    }
//}
//
//int main() {
//    insert("Alice", 101);
//    insert("Bob", 202);
//    insert("Charlie", 303);
//    insert("David", 404);
//    insert("Eve", 505);
//
//    printTable();
//
//    printf("검색 결과: Bob → %d\n", search("Bob"));
//    printf("검색 결과: Eve → %d\n", search("Eve"));
//    printf("검색 결과: Tom → %d\n", search("Tom"));
//
//    return 0;
//}
