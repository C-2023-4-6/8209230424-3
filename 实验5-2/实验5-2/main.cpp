#include<iostream>  //将类声明头文件包含进来
#include<string>
#include"student.h"
using namespace std;
int main()
{
	Student stud;    //定义对象
	stud.set_value();           
	stud.display();              //执行stud对象的display函数
	return 0;
}
