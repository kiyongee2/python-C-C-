//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct Student {
//    int id;                  // 학번
//    char name[30];           // 이름
//    int kor, eng, math;      // 과목 점수
//    float avg;               // 평균
//    struct Student* next;    // 다음 노드
//} Student;
//
//// 새 학생 노드 생성
//Student* createStudent(int id, char* name, int kor, int eng, int math) {
//    Student* newStu = (Student*)malloc(sizeof(Student));
//    if (!newStu) {
//        printf("메모리 할당 실패!\n");
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
//// 학생 추가 (맨 뒤)
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
//// 학생 삭제
//void deleteStudent(Student** head, int id) {
//    Student* temp = *head;
//    Student* prev = NULL;
//
//    while (temp != NULL && temp->id != id) {
//        prev = temp;
//        temp = temp->next;
//    }
//    if (temp == NULL) {
//        printf("학번 %d 학생을 찾을 수 없습니다.\n", id);
//        return;
//    }
//    if (prev == NULL) { // 첫 노드 삭제
//        *head = temp->next;
//    }
//    else {
//        prev->next = temp->next;
//    }
//    free(temp);
//    printf("학번 %d 학생 삭제 완료.\n", id);
//}
//
//// 학생 출력
//void printStudents(Student* head) {
//    if (head == NULL) {
//        printf("등록된 학생이 없습니다.\n");
//        return;
//    }
//    printf("\n===== 학생 목록 =====\n");
//    Student* temp = head;
//    while (temp != NULL) {
//        printf("학번: %d | 이름: %s | 국: %d | 영: %d | 수: %d | 평균: %.2f\n",
//            temp->id, temp->name, temp->kor, temp->eng, temp->math, temp->avg);
//        temp = temp->next;
//    }
//}
//
//// 학생 검색
//void searchStudent(Student* head, int id) {
//    Student* temp = head;
//    while (temp != NULL) {
//        if (temp->id == id) {
//            printf("학번: %d | 이름: %s | 국: %d | 영: %d | 수: %d | 평균: %.2f\n",
//                temp->id, temp->name, temp->kor, temp->eng, temp->math, temp->avg);
//            return;
//        }
//        temp = temp->next;
//    }
//    printf("학번 %d 학생을 찾을 수 없습니다.\n", id);
//}
//
//// 평균 점수 내림차순 정렬
//void sortByAverage(Student** head) {
//    if (*head == NULL || (*head)->next == NULL) return;
//
//    Student* i, * j;
//    for (i = *head; i != NULL; i = i->next) {
//        for (j = i->next; j != NULL; j = j->next) {
//            if (i->avg < j->avg) {
//                // 데이터만 교환
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
//    printf("평균 점수 기준으로 정렬 완료.\n");
//}
//
//// 메모리 해제
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
//        printf("\n===== 학생 성적 관리 메뉴 =====\n");
//        printf("1. 학생 추가\n");
//        printf("2. 학생 삭제\n");
//        printf("3. 모든 학생 출력\n");
//        printf("4. 학생 검색\n");
//        printf("5. 평균 점수 내림차순 정렬\n");
//        printf("0. 종료\n");
//        printf("메뉴 선택: ");
//        scanf("%d", &choice);
//
//        switch (choice) {
//        case 1:
//            printf("학번: "); scanf("%d", &id);
//            printf("이름: "); scanf("%s", name);
//            printf("국어 점수: "); scanf("%d", &kor);
//            printf("영어 점수: "); scanf("%d", &eng);
//            printf("수학 점수: "); scanf("%d", &math);
//            addStudent(&head, id, name, kor, eng, math);
//            break;
//        case 2:
//            printf("삭제할 학번: "); scanf("%d", &id);
//            deleteStudent(&head, id);
//            break;
//        case 3:
//            printStudents(head);
//            break;
//        case 4:
//            printf("검색할 학번: "); scanf("%d", &id);
//            searchStudent(head, id);
//            break;
//        case 5:
//            sortByAverage(&head);
//            break;
//        case 0:
//            freeList(head);
//            printf("프로그램 종료.\n");
//            return 0;
//        default:
//            printf("잘못된 선택입니다.\n");
//        }
//    }
//}
