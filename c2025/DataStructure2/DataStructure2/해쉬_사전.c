//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define TABLE_SIZE 20
//
//// 노드 구조체 (체이닝 방식)
//typedef struct Node {
//    char* word;       // 용어
//    char* meaning;    // 설명
//    struct Node* next;
//} Node;
//
//Node* hashTable[TABLE_SIZE];
//
//// 해시 함수 (문자열 → 인덱스)
//unsigned int hash(const char* key) {
//    unsigned int h = 0;
//    while (*key) {
//        h = (h * 31) + *key++;
//    }
//    return h % TABLE_SIZE;
//}
//
//// 단어 삽입 함수
//void insert(const char* word, const char* meaning) {
//    unsigned int index = hash(word);
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    newNode->word = _strdup(word);        
//    newNode->meaning = _strdup(meaning);  // 의미도 복사
//    newNode->next = hashTable[index];
//    hashTable[index] = newNode;
//}
//
//// 단어 검색 함수
//char* search(const char* word) {
//    unsigned int index = hash(word);
//    Node* current = hashTable[index];
//    while (current) {
//        if (strcmp(current->word, word) == 0) {
//            return current->meaning;
//        }
//        current = current->next;
//    }
//    return NULL; // 못 찾음
//}
//
//// 사전 출력
//void printDictionary() {
//    printf("==== 해시 기반 용어 사전 ====\n");
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
//// 메인 함수
//int main() {
//    // 단어 삽입
//    insert("Array", "연속된 메모리 공간에 데이터를 저장하는 자료구조");
//    insert("Stack", "후입선출(LIFO) 방식의 자료구조");
//    insert("Queue", "선입선출(FIFO) 방식의 자료구조");
//    insert("Tree", "계층적 구조를 표현하는 자료구조");
//    insert("Hash", "키를 해시 함수로 변환해 빠르게 검색하는 자료구조");
//
//    // 사전 출력
//    printDictionary();
//
//    // 검색 테스트
//    char* term = "Stack";
//    char* meaning = search(term);
//    if (meaning) {
//        printf("\n검색 결과 → %s : %s\n", term, meaning);
//    }
//    else {
//        printf("\n'%s' 단어를 찾을 수 없습니다.\n", term);
//    }
//
//    return 0;
//}
