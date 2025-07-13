//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
///*
//
//연결리스트 - 비연속적인 메모리 공간
// - head - 첫 노드 주소(시작점)
// - next가 NULL인 상태가 종착점
//*/
//
//typedef struct node{
//	int value;
//	struct node* next;  //다음 노드의 주소 저장 포인터
//}node;
//
//node* head = NULL;  //첫 노드 주소를 저장하는 포인터
//
//void insert_node_front(int data);
//void display_node();
//
//int main()
//{
//	int choice;
//	int data;
//
//	while (1) {
//		system("cls");
//		printf("\n*** 연결 리스트 ***\n");
//		printf(" 1. 노드 삽입(맨 앞)\n");
//		printf(" 10. 연결 리스트 출력\n");
//		printf(" 0. 프로그램 종료!\n");
//		
//		printf("\n메뉴 선택 : ");
//		scanf("%d", &choice);
//		while (getchar() != '\n');
//
//		switch (choice) {
//		case 1:
//			printf("점수 입력: ");
//			scanf("%d", &data);
//			while (getchar() != '\n');
//			insert_node_front(data);
//			break;
//		case 10:
//			display_node();
//			break;
//		case 0:
//			exit(0);
//		}
//		printf("\n");
//		system("pause");
//	}
//
//	return 0;
//}
//
//void insert_node_front(int data) {
//	node* new_node; //새 노드 삽입
//	new_node = (node*)malloc(sizeof(node));
//	new_node->value = data; //값 저장
//	new_node->next = NULL;  //NULL 저장
//
//	if (head == NULL) {
//		head = new_node;  //새 노드가 head가 됨
//		return;
//	}
//
//	new_node->next = head;
//	head = new_node;
//}
//
////노드 순회
//void display_node() {
//	node* curNode;  //방문 중인 노드의 주소를 저장하는 포인터
//	if (head == NULL) {
//		printf("\n출력할 데이터가 없습니다.\n");
//		return;
//	}
//	curNode = head; //첫 노드부터 방문
//
//	/*printf("%d => ", curNode->value);
//	curNode = curNode->next;*/
//
//	while (curNode->next != NULL) {
//		printf("%d => ", curNode->value); //방문 노드의 값을 출력
//		curNode = curNode->next;  //다음 노드 주소로 이동
//	}
//	printf("%d\n", curNode->value);
//}
