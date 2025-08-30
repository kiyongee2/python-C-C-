//#include <stdio.h>
//#include <stdlib.h>
//
////노드 구조체
//typedef struct {
//	int data;  //노드에 저장할 데이터
//	struct Node* left;  //왼쪽 자식 노드
//	struct Node* right; //오른쪽 자식 노드
//}Node;
//
////노드 생성 함수
//Node* createNode(int value) {
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	if (newNode == NULL) {
//		puts("메모리 할당 실패!");
//		exit(1);
//	}
//	newNode->data = value;  //새 노드 데이터값
//	newNode->left = NULL;   //초기화
//	newNode->right = NULL;  //초기화
//	return newNode;  //새 노드 반환
//}
//
////노드 삽입
//Node* insert(Node* root, int value) {
//	//처음 트리가 비었을때(재귀의 종료 조건)
//	if (root == NULL)  
//		return createNode(value);  //새 노드를 root로 반환
//
//	//재귀 호출로 내려갔을때 - 해당 자식노드가 NULL일때 그 자리에 새 노드 삽입
//	if (value < root->data)
//		root->left = insert(root->left, value); //왼쪽 서브루트에 삽입
//	if (value > root->data)
//		root->right = insert(root->right, value); //오른쪽 서브루트에 삽입
//
//	return root; //변경된 루트 반환
//}
//
////중위 순회(왼쪽 - 현재(루트) - 오른쪽)
//void inOrder(Node* root) {
//	if (root != NULL) {
//		inOrder(root->left);
//		printf("%d ", root->data);
//		inOrder(root->right);
//	}
//}
//
////노드 탐색
//Node* search(Node* root, int key) {
//	//root가 없거나 그 값이 찾는 값이면 root 반환(종료 조건)
//	if (root == NULL || root->data == key)
//		return root;
//
//	if (key < root->data)
//		return search(root->left, key);
//	else
//		return search(root->right, key);
//}
//
////최소값 찾기
//Node* findMin(Node* root) {
//	while (root->left != NULL)
//		root = root->left; //왼쪽 노드값을 찾아서 root에 저장
//	return root;
//}
//
////노드 삭제
//Node* delete(Node* root, int key) {
//	if (root == NULL)
//		return root; //트리가 비어있으면 그대로 반환
//
//	if (key < root->data) //찾는 값이 루트보다 작으면 왼쪽으로 
//		root->left = delete(root->left, key);
//	else if (key > root->data)
//		root->right = delete(root->right, key);
//	else { //key == root->data, 값을 찾음
//		if (root->left == NULL) { //왼쪽 자식이 없음
//			Node* temp = root->right; //오른쪽 자식을 임시변수에 저장
//			free(root); //현재 노드 삭제
//			return temp;  //오른쪽 자식 반환(부모와 연결)
//		}
//		else if (root->right == NULL) { //오른쪽 자식이 없음
//			Node* temp = root->left; 
//			free(root); 
//			return temp;  
//		}
//		else { //자식이 둘 다 있는 경우
//			Node* temp = findMin(root->right); //오른쪽에서 최소값 찾음
//			root->data = temp->data;  //현재 노드값 교체
//			root->right = delete(root->right, temp->data); //최소값 노드 삭제
//		}
//	}
//	return root;
//}
//
//
////트리 메모리 해제
//void freeTree(Node* root) {
//	if (root != NULL) {
//		//재귀 호출로 내려가며 메모리 해제
//		freeTree(root->left);
//		freeTree(root->right);
//		free(root); //현재 노드 해제
//	}
//}
//
//int main() {
//
//	Node* root = NULL; //root 노드 생성
//
//	//노드 삽입
//	int values[] = {50, 30, 70, 20, 40, 60, 80, 90};
//	int size = sizeof(values) / sizeof(values[0]);
//
//	for (int i = 0; i < size; i++) {
//		root = insert(root, values[i]);
//	}
//
//	//중위 순회
//	printf("중위 운행 결과: ");
//	inOrder(root);
//	printf("\n");
//
//	//노드 검색
//	int key = 40;
//	Node* found = search(root, key);
//	if (found)
//		printf("%d을 찾았습니다.\n", key);
//	else
//		printf("%d는 트리에 없습니다.\n", key);
//
//	//노드 삭제
//	puts("70 삭제 후");
//	root = delete(root, 70);
//	inOrder(root);
//
//	//메모리 해제
//	freeTree(root);
//	return 0;
//}
//
