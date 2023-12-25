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
	cout << "请输入长：" << endl;
	cin >> length;
	cout << "请输入宽：" << endl;
	cin >> width;
	cout << "请输入高：" << endl;
	cin >> height;
}
void volume::count_volume()
{
	V_volume = length * width * height;
}
void volume::show_volume()
{
	cout << "体积为：" << V_volume << endl;
}