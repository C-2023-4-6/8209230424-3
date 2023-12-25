#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void set_time(void)
	{
		cout << "请输入小时：" << endl;
		cin >> hour;
		cout << "请输入分钟：" << endl;
		cin >> minute;
		cout << "请输入秒：" << endl;
		cin >> sec;
	}
	void show_time(void)
	{
		cout << "最后时间为：" << hour << " ：" << minute << " ：" << sec;
	}
};
int main()
{
	Time T;           //定义t1为Time类对象
	T.set_time();
	T.show_time();
	return 0;
}
