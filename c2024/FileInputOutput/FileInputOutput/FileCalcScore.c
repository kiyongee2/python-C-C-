#include <stdio.h>

int main() {

    FILE* fin, * fout;
    char line[100];  // 파일에서 한 줄을 저장할 버퍼
    char name[20];  
    int no, eng, math;  
    float avg;  

    if (fopen_s(&fin, "scorelist.txt", "r") != 0) {
        perror("scorelist.txt 파일 열기에 실패함");
        return 1;
    }

    if (fopen_s(&fout, "scorelist3.txt", "w") != 0) {
        perror("scorelist2.txt 파일 열기에 실패함");
        fclose(fin);  // 입력 파일 닫기
        return 1;
    }

    // 제목행 쓰기 (출력 파일에 추가)
    fprintf(fout, "번호 이름 영어 수학 평균\n");

    // 첫 번째 줄(제목행)은 무시
    fgets(line, sizeof(line), fin);

    // 파일 내용 한 줄씩 읽어서 평균 계산 및 저장
    while (fgets(line, sizeof(line), fin) != NULL) {
        //4개의 변수와 같으면 line을 읽음
        if (sscanf_s(line, "%d %s %d %d", &no, name, sizeof(name), &eng, &math) == 4) {
            avg = (float)(eng + math) / 2;  // 평균 계산
            fprintf(fout, "%3d %7s %3d %3d %6.2f\n", no, name, eng, math, avg);//파일쓰기
        }
        else {
            printf("잘못된 형식의 데이터: %s", line);
        }
    }
    fclose(fin);
    fclose(fout);

    printf("평균 계산 결과가 scorelist3.txt에 저장되었습니다.\n");

    system("pause");

    return 0;

}
