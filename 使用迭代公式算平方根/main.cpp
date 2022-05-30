//
//  main.cpp
//  使用迭代公式算平方根
//
//  Created by 李钰潇 on 2020/12/15.
//  使用迭代公式编程求某个正整数a的平方根

#include <iostream>
using namespace std;

int main() {
    const double eps=1e-8;
    double a,x0,x;
    cout<<"please input a:";
    cin>>a;
    x0=a/2;
    x=( x0 + a/x0 )/2;
    while (fabs(x-x0)>eps) {
        x=x0;
        x=( x0 + a/x0 )/2;
    }
    cout<<x<<endl;
}

