//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    FILE* fin;
//    FILE* fout;
//    char name[20];  // �̸�
//    int no, eng, math;  // �й�, ��������, ��������
//    int total = 0; // ����
//    double avg = 0.0; // ���
//
//    // �Է� ���� ����
//    fopen_s(&fin, "scorelist.txt", "r");
//    if (fin == NULL) {
//        printf("�Է� ���� ���⿡ ������\n");
//        return 1;
//    }
//
//    // ��� ���� ����
//    fopen_s(&fout, "scorelist2.txt", "w");
//    if (fout == NULL) {
//        printf("��� ���� ���⿡ ������\n");
//        fclose(fin);  // �Է� ���� �ݱ�
//        return 1;
//    }
//
//    // ���� �� ����
//    fprintf(fout, "��ȣ �̸� ���� ���� ���� ���\n");
//    fprintf(stdout, "��ȣ �̸� ���� ���� ���� ���\n");
//
//    // ���Ͽ��� ������ �б�
//    while (fscanf_s(fin, "%d %s %d %d", &no, name, (unsigned)_countof(name), &eng, &math) != EOF) {
//        total = eng + math;  // ���� ���
//        avg = (double)total / 2;  // ��� ��� (������ 2���̹Ƿ�)
//
//        // ���Ͽ� ����
//        fprintf(fout, "%3d %s %3d %3d %4d %.1lf\n", no, name, eng, math, total, avg);
//
//        // ����Ϳ� ���
//        fprintf(stdout, "%3d %s %3d %3d %4d %.1lf\n", no, name, eng, math, total, avg);
//    }
//
//    // ���� �ݱ�
//    fclose(fin);
//    fclose(fout);
//
//    return 0;
//}
