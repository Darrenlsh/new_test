#include<iostream>
using namespace std;
class time
{
public:
	void set_time(void);
	void show_time(void);
private:
	int hour;
	int minute;
	int second;
};
time t;
void time::set_time(void)
{
	printf("请输入具体的时间：\n");
	cin >> t.hour;
	cin >> t.minute;
	cin >> t.second;
}
void time::show_time(void)
{
	printf("输入的时间为\n");
	cout << t.hour << ":" << t.minute << ":" << t.second << endl;
}