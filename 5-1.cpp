#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec;
public:
	void set_time(void)
	{
		cout << "������Сʱ��" << endl;
		cin >> hour;
		cout << "��������ӣ�" << endl;
		cin >> minute;
		cout << "�������룺" << endl;
		cin >> sec;
	}
	void show_time(void)
	{
		cout << "���ʱ��Ϊ��" << hour << " ��" << minute << " ��" << sec;
	}
};
int main()
{
	Time T;           //����t1ΪTime�����
	T.set_time();
	T.show_time();
	return 0;
}
