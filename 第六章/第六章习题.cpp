//
//  第六章习题.cpp
//  函数测试
//
//  Created by 李钰潇 on 2021/3/27.
//

#include "第六章习题.hpp"
#include<iostream>
using namespace std;
// 定义一个Box（盒子）类，在该类定义中包括以下数据成员和成员函数。
// 数据成员：length（长）、width（宽）和height（高）。
// 成员函数：构造函数Box，设置盒子的长、宽和高三个初始数据；成员函数setBox对数据成员置值；成员函数volume计算盒子的体积。
// 在main函数中，要求创建Box对象，输入长、宽、高，输出盒子的体积。
class Box {
    double length, weight, height;
public:
    void setBox(double a, double b, double c)
    {
        length = a;
        weight = b;
        height = c;
    }
    void volume()const;
};

void Box::volume()const
{
    
    double volume = length * weight * height;
    cout<<"Box的体积为"<<volume<<endl;
};

int main()
{
    Box B1;
    B1.setBox(3,4,5);
    B1.volume();
};
