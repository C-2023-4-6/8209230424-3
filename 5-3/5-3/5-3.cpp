#include<iostream>
using namespace std;
class volume
{
public:
	void set_volume();
	void count_volume();
	void show_volume();
private:
	int length;
	int width;
	int height;
	int V_volume;
};
int main()
{
	volume V[3];
	for (int i = 0; i < 3; i++)
	{
		V[i].set_volume();
		V[i].count_volume();
		V[i].show_volume();
	}
}
void volume::set_volume()
{
	cout << "�����볤��" << endl;
	cin >> length;
	cout << "�������" << endl;
	cin >> width;
	cout << "������ߣ�" << endl;
	cin >> height;
}
void volume::count_volume()
{
	V_volume = length * width * height;
}
void volume::show_volume()
{
	cout << "���Ϊ��" << V_volume << endl;
}