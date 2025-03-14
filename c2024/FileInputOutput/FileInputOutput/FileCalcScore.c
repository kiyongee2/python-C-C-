#include <stdio.h>

int main() {

    FILE* fin, * fout;
    char line[100];  // ���Ͽ��� �� ���� ������ ����
    char name[20];  
    int no, eng, math;  
    float avg;  

    if (fopen_s(&fin, "scorelist.txt", "r") != 0) {
        perror("scorelist.txt ���� ���⿡ ������");
        return 1;
    }

    if (fopen_s(&fout, "scorelist3.txt", "w") != 0) {
        perror("scorelist2.txt ���� ���⿡ ������");
        fclose(fin);  // �Է� ���� �ݱ�
        return 1;
    }

    // ������ ���� (��� ���Ͽ� �߰�)
    fprintf(fout, "��ȣ �̸� ���� ���� ���\n");

    // ù ��° ��(������)�� ����
    fgets(line, sizeof(line), fin);

    // ���� ���� �� �پ� �о ��� ��� �� ����
    while (fgets(line, sizeof(line), fin) != NULL) {
        //4���� ������ ������ line�� ����
        if (sscanf_s(line, "%d %s %d %d", &no, name, sizeof(name), &eng, &math) == 4) {
            avg = (float)(eng + math) / 2;  // ��� ���
            fprintf(fout, "%3d %7s %3d %3d %6.2f\n", no, name, eng, math, avg);//���Ͼ���
        }
        else {
            printf("�߸��� ������ ������: %s", line);
        }
    }
    fclose(fin);
    fclose(fout);

    printf("��� ��� ����� scorelist3.txt�� ����Ǿ����ϴ�.\n");

    system("pause");

    return 0;

}
