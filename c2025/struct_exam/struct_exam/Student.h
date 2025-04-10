
// 성적 구조체
typedef struct
{
	int math;  //수학
	int eng;   //영어
	double avg;  //평균
}Score;

//학생 구조체
typedef struct
{
	int number; //학번
	char name[20]; //이름
	Score score;   //점수 
}Student;


