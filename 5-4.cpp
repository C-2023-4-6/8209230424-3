#include<iostream>
#include<string>
using namespace std;
class student
{
public:
	int num;
	int score;
};
int score_max(student *s, int  n)//数组的项要设个n
{
	int max_score = s[0].score;
	int max_num = s[0].num;
	for (int i = 0; i < 5; i++)
	{
		if (s[i].score > max_score)
		{
			max_score = s[i].score;
			max_num = s[i].num;
		}
	}
	return max_num;
}
int main()
{
	student s[5] = { {1,56},{2,57},{3,58},{4,59},{5,60} };
	int Max_num = score_max(s,5);
	cout << Max_num;
	return 0;
}
