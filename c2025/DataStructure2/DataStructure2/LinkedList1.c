#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int data;
	struct Node* next;
}Node;

int main()
{
	int num;    //노드의 개수
	int value;  //노드의 값
	Node* head = NULL;    //head 노드 초기화
	Node* current = NULL; //현재 노드
	Node* newNode = NULL; //새 노드

	printf("노드 개수를 입력하세요: ");
	scanf("%d", &num);

	//입력한 개수 만큼 노드 생성 및 연결 반복
	for (int i = 0; i < num; i++) {
		newNode = (Node*)malloc(sizeof(Node));

		printf("%d번째 노드 값 입력: ", i + 1);
		scanf("%d", &value);

		//1. 노드 생성 - 맨 앞에서
		newNode->data = value;
		newNode->next = head;  //새 노드가 head와 연결됨
		head = newNode; //새 노드가 head 노드가 됨

		//2. 노드 생성 - 맨 뒤에서
		newNode->data = value; //값 저장
		newNode->next = NULL;    //주소 초기화

		if (head == NULL) {
			head = newNode;    //새 노드가 head가 됨
			current = newNode; //새 노드가 현재 노드가 됨
		}
		else {
			current->next = newNode; //새 노드가 현재(이전) 노드와 연결됨
			current = newNode; //새 노드가 현재 노드가 됨
		}
	}

	printf("\n연결 리스트 출력: ");
	current = head; //head 노드를 현재 노드에 저장
	while (current != NULL) {
		printf("%d -> ", current->data); //현재 노드값 출력
		current = current->next;  //현재 노드를 다음 노드로 이동
	}
	printf("NULL\n");

	//메모리 해제
	current = head;
	while (current != NULL) {
		Node* temp = current; //현재 노드를 저장
		printf("free(%d)\n", current->data);
		current = current->next;  //current를 다음 노드로 이동
		free(temp); //현재 노드의 메모리 해제
	}

	return 0;
}