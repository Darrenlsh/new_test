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
	printf("����������ʱ�䣺\n");
	cin >> t.hour;
	cin >> t.minute;
	cin >> t.second;
}
void time::show_time(void)
{
	printf("�����ʱ��Ϊ\n");
	cout << t.hour << ":" << t.minute << ":" << t.second << endl;
}