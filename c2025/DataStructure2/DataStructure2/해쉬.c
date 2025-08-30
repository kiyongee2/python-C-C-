//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
///*
//   예를 들어 "apple" 이라는 문자열이 들어온다면:
//   hash = 0 (초기값)
//   'a'(97) 처리 → hash = 0*31 + 97 = 97
//   'p'(112) 처리 → hash = 97*31 + 112 = 3119
//   'p'(112) 처리 → hash = 3119*31 + 112 = 96801
//   'l'(108) 처리 → hash = 96801*31 + 108 = 3000949
//   'e'(101) 처리 → hash = 3000949*31 + 101 = 93029520
//
//  마지막에 93029520 % TABLE_SIZE 해서
//  해시 테이블의 인덱스로 변환합니다
//* 
//* 
//  왜 31을 곱할까?
//  31은 소수(prime number) → 충돌이 줄어듦
//
// (hash * 31) 은 문자열의 순서를 반영
// 예: "abc" 와 "cab" 은 같은 문자지만 다른 해시값 나옴
//
// 31은 2진수에서 (hash << 5) - hash (즉 32배 - 자기 자신)으로 최적화 가능 → 빠름
// 그래서 많은 해시 함수 구현에서 31을 자주 사용합니다
//
//*/
//
//#define TABLE_SIZE 10
//
//// 노드 구조체 (체이닝)
//typedef struct Node {
//    char* key;  //키
//    int value;  //값
//    struct Node* next; //노드의 다음 주소
//} Node;
//
//Node* hashTable[TABLE_SIZE];
//
//// 해시 함수 (문자열 → 인덱스)
//unsigned int hash(const char* key) {
//    unsigned int hash = 0; //hsah 값 누적용 변수
//    while (*key) { // 문자열 끝('\0')까지 반복
//        // 기존 해시값에 31을 곱하고 현재 문자의 아스키 값을 더함
//        // *key++ : 현재 문자를 사용한 후 다음 문자로 이동
//        hash = (hash * 31) + *key++; // 
//    }
//    return hash % TABLE_SIZE;  // 테이블 크기에 맞게 인덱스 범위 제한
//}
//
//// 삽입 함수
//void insert(const char* key, int value) {
//    unsigned int index = hash(key); //key를 해시 → index 생성
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (!newNode) {
//        printf("메모리 할당 실패!\n");
//        exit(1);
//    }
//
//    newNode->key = _strdup(key);  //key 문자열 복사
//    newNode->value = value;  //값 저장
//    newNode->next = hashTable[index];  //기존 연결리스트 앞에 연결
//    hashTable[index] = newNode; //새 노드를 체인 맨 앞에 등록
//}
//
//// 검색 함수
//int search(const char* key) {
//    unsigned int index = hash(key);
//    Node* current = hashTable[index];  //해당 버킷의 첫 노드부터 탐색 시작
//    while (current) {
//        if (strcmp(current->key, key) == 0) {  //key 일치 확인
//            return current->value; // 찾음
//        }
//        current = current->next; //다음 노드로 이동
//    }
//    return -1; // 못 찾음
//}
//
//// 해시 테이블 출력
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
//// 메인 테스트
//int main() {
//    insert("apple", 100);
//    insert("banana", 200);
//    insert("grape", 300);
//    insert("orange", 400);
//    insert("melon", 500);
//
//    printTable();
//
//    printf("검색 결과: apple → %d\n", search("apple"));
//    printf("검색 결과: banana → %d\n", search("banana"));
//    printf("검색 결과: kiwi → %d\n", search("kiwi"));
//
//    return 0;
//}
