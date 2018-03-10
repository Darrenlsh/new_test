#include<iostream>
using namespace std;
class student
{
public:
	void set_student(void);
	float average(float score);
	void show_student(void);
private:
	int number;
	char name;
	float score;
	float average_score;
};
student s;
void student::set_student(void)
{
	printf("请输入学生的学号，姓名，语文成绩，数学成绩：");
	cin >> s.number;
	cin >> s.name;
	cin >> s.score;


}

