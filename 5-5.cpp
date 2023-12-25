#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int x, int y)
	{

	}
	void set_point(int i, int j);
	void display();
};
int main()
{
	Point M(60,80);
	M.set_point(60, 80);
	M.display();
}
void Point::set_point(int i, int j)
{
	x = 60 + i;
	y = 80 + j;
}
void Point::display()
{
	cout << " x = " << x << endl;
	cout << " y = " << y << endl;
}