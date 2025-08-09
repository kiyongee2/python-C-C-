#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>  //malloc(), free()
#include <stdbool.h> //true/false ���

/*
  - �迭�� ��ġ�� ���� �׷����� �׸��� ���α׷�
	***
	******
	****
	**
*/
int main()
{
	//���� �޸� �Ҵ�
	int* arr = NULL; //������ ����
	int size;  //�迭�� ũ��
	int i, j;

	printf("�迭�� ũ�� �Է�: ");
	scanf("%d", &size);

	arr = (int*)malloc(sizeof(int) * size);
	if (arr == NULL) {
		puts("�޸� �Ҵ翡 �����߽��ϴ�.\n");
		return 1;
	}

	// ����� �� �Է� �� ��ȿ�� �˻�
	for (i = 0; i < size; i++) {
		while (true) {
			printf("arr[%d] �� �Է� (0 �̻� ����): ", i);
			if (scanf("%d", &arr[i]) != 1 || arr[i] < 0) {
				printf("�߸��� �Է��Դϴ�. �ٽ� �Է��ϼ���.\n");

				// �Է� ���� ����
				while (getchar() != '\n');
			}
			else { //scanf("%d", &arr[i]) == 1
				break; //�� �Է��� while�� ��������
			}
		}
	}
	printf("\n");
	/*
	   i=0, arr[0]=3, i++ , ***
	   i=1, arr[1]=6, i++ , ******
	   i=2, arr[1]=f, �߸��� �Է��Դϴ�.
	   i=2, arr[2]=4, i++ , ****
	   i=3, arr[3]=2, i++ , **
	   i=4, �ݺ� ����
	*/

	//���� �׷��� ���
	for (i = 0; i < size; i++) {
		printf("arr[%d]=%d|", i, arr[i]);
		for (j = 1; j <= arr[i]; j++) {
			printf("*");
		}
		printf("\n");
	}
	free(arr); //�޸� �ݳ�

	return 0;
}