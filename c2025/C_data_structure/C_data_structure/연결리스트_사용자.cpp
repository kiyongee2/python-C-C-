//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
///*
//
//���Ḯ��Ʈ - �񿬼����� �޸� ����
// - head - ù ��� �ּ�(������)
// - next�� NULL�� ���°� ������
//*/
//
//typedef struct node{
//	int value;
//	struct node* next;  //���� ����� �ּ� ���� ������
//}node;
//
//node* head = NULL;  //ù ��� �ּҸ� �����ϴ� ������
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
//		printf("\n*** ���� ����Ʈ ***\n");
//		printf(" 1. ��� ����(�� ��)\n");
//		printf(" 10. ���� ����Ʈ ���\n");
//		printf(" 0. ���α׷� ����!\n");
//		
//		printf("\n�޴� ���� : ");
//		scanf("%d", &choice);
//		while (getchar() != '\n');
//
//		switch (choice) {
//		case 1:
//			printf("���� �Է�: ");
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
//	node* new_node; //�� ��� ����
//	new_node = (node*)malloc(sizeof(node));
//	new_node->value = data; //�� ����
//	new_node->next = NULL;  //NULL ����
//
//	if (head == NULL) {
//		head = new_node;  //�� ��尡 head�� ��
//		return;
//	}
//
//	new_node->next = head;
//	head = new_node;
//}
//
////��� ��ȸ
//void display_node() {
//	node* curNode;  //�湮 ���� ����� �ּҸ� �����ϴ� ������
//	if (head == NULL) {
//		printf("\n����� �����Ͱ� �����ϴ�.\n");
//		return;
//	}
//	curNode = head; //ù ������ �湮
//
//	/*printf("%d => ", curNode->value);
//	curNode = curNode->next;*/
//
//	while (curNode->next != NULL) {
//		printf("%d => ", curNode->value); //�湮 ����� ���� ���
//		curNode = curNode->next;  //���� ��� �ּҷ� �̵�
//	}
//	printf("%d\n", curNode->value);
//}
