#ifndef SUBJECT_H
#define SUBJECT_H
#include <string>
using namespace std;

class Subject {
private:
    string subjectName;  //과목명
    int scorePoint;      //점수
public:
    void setSubjectName(string subjectName);
    string getSubjectName();

    void setScorePoint(int scorePoint);
    int getScorePoint();
};
#endif
