//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct Student {
//    int id;                  // �й�
//    char name[30];           // �̸�
//    int kor, eng, math;      // ���� ����
//    float avg;               // ���
//    struct Student* next;    // ���� ���
//} Student;
//
//// �� �л� ��� ����
//Student* createStudent(int id, char* name, int kor, int eng, int math) {
//    Student* newStu = (Student*)malloc(sizeof(Student));
//    if (!newStu) {
//        printf("�޸� �Ҵ� ����!\n");
//        exit(1);
//    }
//    newStu->id = id;
//    strcpy(newStu->name, name);
//    newStu->kor = kor;
//    newStu->eng = eng;
//    newStu->math = math;
//    newStu->avg = (kor + eng + math) / 3.0f;
//    newStu->next = NULL;
//    return newStu;
//}
//
//// �л� �߰� (�� ��)
//void addStudent(Student** head, int id, char* name, int kor, int eng, int math) {
//    Student* newStu = createStudent(id, name, kor, eng, math);
//    if (*head == NULL) {
//        *head = newStu;
//        return;
//    }
//    Student* temp = *head;
//    while (temp->next != NULL) temp = temp->next;
//    temp->next = newStu;
//}
//
//// �л� ����
//void deleteStudent(Student** head, int id) {
//    Student* temp = *head;
//    Student* prev = NULL;
//
//    while (temp != NULL && temp->id != id) {
//        prev = temp;
//        temp = temp->next;
//    }
//    if (temp == NULL) {
//        printf("�й� %d �л��� ã�� �� �����ϴ�.\n", id);
//        return;
//    }
//    if (prev == NULL) { // ù ��� ����
//        *head = temp->next;
//    }
//    else {
//        prev->next = temp->next;
//    }
//    free(temp);
//    printf("�й� %d �л� ���� �Ϸ�.\n", id);
//}
//
//// �л� ���
//void printStudents(Student* head) {
//    if (head == NULL) {
//        printf("��ϵ� �л��� �����ϴ�.\n");
//        return;
//    }
//    printf("\n===== �л� ��� =====\n");
//    Student* temp = head;
//    while (temp != NULL) {
//        printf("�й�: %d | �̸�: %s | ��: %d | ��: %d | ��: %d | ���: %.2f\n",
//            temp->id, temp->name, temp->kor, temp->eng, temp->math, temp->avg);
//        temp = temp->next;
//    }
//}
//
//// �л� �˻�
//void searchStudent(Student* head, int id) {
//    Student* temp = head;
//    while (temp != NULL) {
//        if (temp->id == id) {
//            printf("�й�: %d | �̸�: %s | ��: %d | ��: %d | ��: %d | ���: %.2f\n",
//                temp->id, temp->name, temp->kor, temp->eng, temp->math, temp->avg);
//            return;
//        }
//        temp = temp->next;
//    }
//    printf("�й� %d �л��� ã�� �� �����ϴ�.\n", id);
//}
//
//// ��� ���� �������� ����
//void sortByAverage(Student** head) {
//    if (*head == NULL || (*head)->next == NULL) return;
//
//    Student* i, * j;
//    for (i = *head; i != NULL; i = i->next) {
//        for (j = i->next; j != NULL; j = j->next) {
//            if (i->avg < j->avg) {
//                // �����͸� ��ȯ
//                int tempId = i->id;
//                char tempName[30];
//                strcpy(tempName, i->name);
//                int tempKor = i->kor, tempEng = i->eng, tempMath = i->math;
//                float tempAvg = i->avg;
//
//                i->id = j->id;
//                strcpy(i->name, j->name);
//                i->kor = j->kor; i->eng = j->eng; i->math = j->math;
//                i->avg = j->avg;
//
//                j->id = tempId;
//                strcpy(j->name, tempName);
//                j->kor = tempKor; j->eng = tempEng; j->math = tempMath;
//                j->avg = tempAvg;
//            }
//        }
//    }
//    printf("��� ���� �������� ���� �Ϸ�.\n");
//}
//
//// �޸� ����
//void freeList(Student* head) {
//    Student* temp;
//    while (head != NULL) {
//        temp = head;
//        head = head->next;
//        free(temp);
//    }
//}
//
//int main() {
//    Student* head = NULL;
//    int choice, id, kor, eng, math;
//    char name[30];
//
//    while (1) {
//        printf("\n===== �л� ���� ���� �޴� =====\n");
//        printf("1. �л� �߰�\n");
//        printf("2. �л� ����\n");
//        printf("3. ��� �л� ���\n");
//        printf("4. �л� �˻�\n");
//        printf("5. ��� ���� �������� ����\n");
//        printf("0. ����\n");
//        printf("�޴� ����: ");
//        scanf("%d", &choice);
//
//        switch (choice) {
//        case 1:
//            printf("�й�: "); scanf("%d", &id);
//            printf("�̸�: "); scanf("%s", name);
//            printf("���� ����: "); scanf("%d", &kor);
//            printf("���� ����: "); scanf("%d", &eng);
//            printf("���� ����: "); scanf("%d", &math);
//            addStudent(&head, id, name, kor, eng, math);
//            break;
//        case 2:
//            printf("������ �й�: "); scanf("%d", &id);
//            deleteStudent(&head, id);
//            break;
//        case 3:
//            printStudents(head);
//            break;
//        case 4:
//            printf("�˻��� �й�: "); scanf("%d", &id);
//            searchStudent(head, id);
//            break;
//        case 5:
//            sortByAverage(&head);
//            break;
//        case 0:
//            freeList(head);
//            printf("���α׷� ����.\n");
//            return 0;
//        default:
//            printf("�߸��� �����Դϴ�.\n");
//        }
//    }
//}
