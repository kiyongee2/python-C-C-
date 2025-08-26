//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define TABLE_SIZE 10
//
//typedef struct {
//	char* key;
//	int value;
//	struct Node* next;
//}Node;
//
//Node* hashTable[TABLE_SIZE];
//
////해시 함수(문자열 -> 인덱스)
//unsigned int hash(const char* key) {
//	unsigned int hash = 0;
//	while (*key) {
//		hash = (hash * 31) + *key++; //간단한 다항식 해싱
//	}
//	return hash % TABLE_SIZE;
//}
//
////삽입 함수
//void insert(const char* key, int value) {
//	unsigned int index = hash(key);
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	newNode->key = _strdup(key);
//	newNode->value = value;
//	newNode->next = hashTable[index];
//	hashTable[index] = newNode;
//}
//
////해시 테이블 출력
//void printTable() {
//	for (int i = 0; i < TABLE_SIZE; i++) {
//		printf("[%d]: ", i);
//		Node* current = hashTable[i];
//		while (current) {
//			printf("(%s, %d) -> ", current->key, current->value);
//			current = current->next;
//		}
//		printf("NULL\n");
//	}
//}
//
////검색 함수
//int search(const char* key) {
//	unsigned int index = hash(key);
//	Node* current = hashTable[index];
//	while (current) {
//		if (strcmp(current->key, key) == 0) {
//			return current->value;
//		}
//		current = current->next;
//	}
//	return -1;
//}
//
//int main() {
//
//	insert("apple", 100);
//	insert("banana", 200);
//	insert("grape", 300);
//	insert("orange", 400);
//	insert("melon", 500);
//
//	printTable();
//
//	printf("검색 결과: apple -> %d\n", search("apple"));
//	printf("검색 결과: banana -> %d\n", search("banana"));
//	printf("검색 결과: peach -> %d\n", search("peach"));
//
//	return 0;
//}