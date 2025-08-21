#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int data;
	struct Node* next;
}Node;

int main()
{
	int num;    //����� ����
	int value;  //����� ��
	Node* head = NULL;    //head ��� �ʱ�ȭ
	Node* current = NULL; //���� ���
	Node* newNode = NULL; //�� ���

	printf("��� ������ �Է��ϼ���: ");
	scanf("%d", &num);

	//�Է��� ���� ��ŭ ��� ���� �� ���� �ݺ�
	for (int i = 0; i < num; i++) {
		newNode = (Node*)malloc(sizeof(Node));

		printf("%d��° ��� �� �Է�: ", i + 1);
		scanf("%d", &value);

		//1. ��� ���� - �� �տ���
		newNode->data = value;
		newNode->next = head;  //�� ��尡 head�� �����
		head = newNode; //�� ��尡 head ��尡 ��

		//2. ��� ���� - �� �ڿ���
		newNode->data = value; //�� ����
		newNode->next = NULL;    //�ּ� �ʱ�ȭ

		if (head == NULL) {
			head = newNode;    //�� ��尡 head�� ��
			current = newNode; //�� ��尡 ���� ��尡 ��
		}
		else {
			current->next = newNode; //�� ��尡 ����(����) ���� �����
			current = newNode; //�� ��尡 ���� ��尡 ��
		}
	}

	printf("\n���� ����Ʈ ���: ");
	current = head; //head ��带 ���� ��忡 ����
	while (current != NULL) {
		printf("%d -> ", current->data); //���� ��尪 ���
		current = current->next;  //���� ��带 ���� ���� �̵�
	}
	printf("NULL\n");

	//�޸� ����
	current = head;
	while (current != NULL) {
		Node* temp = current; //���� ��带 ����
		printf("free(%d)\n", current->data);
		current = current->next;  //current�� ���� ���� �̵�
		free(temp); //���� ����� �޸� ����
	}

	return 0;
}