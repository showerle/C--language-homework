//
//  学生类.cpp
//  函数测试
//
//  Created by 李钰潇 on 2021/3/27.
//

#include "学生类.hpp"
#include <iostream>
using namespace std;
//定义一个student类，在该类定义中包括：一个数据成员（分数score）及两个静态数据成员（总分total和学生人数count）；成员函数scoretotalcount(double s)用于设置分数、求总分和累计学生人数；静态成员函数sum()用于返回总分；静态成员函数average()用于求平均值。在main函数中，输入某班同学的成绩，并调用上述函数求全班学生的总分和平均分。

class student
{
    double score;
    static double total, count; //静态成员在类内声明
public:
    void scoretotalcount(double s)
    {
        score = s;
        total += s;
        count++;
    };
    double static sum()  {
        return total;
    } //静态函数可以在类中定义，但只能访问类的静态数据成员
    double static average()
    {
        return total/count;
    };
};

double student::total = 0 ; //静态数据成员在类外初始化
double student::count = 0 ;

int main()
{
    int i,n;
    double s;
    cout << "请输入学生人数：";
    cin >> n;
    student stu;
    for( i=1; i<=n; i++ )
    {
    cout << "请输入第" << i << "个学生的分数：";
    cin >> s;
    stu.scoretotalcount( s );}
    cout << "总分：" << student::sum() << endl;
    cout << "平均分：" << student::average() << endl;
};
