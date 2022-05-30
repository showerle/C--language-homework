//
//  main.cpp
//  判别能否形成三角形
//
//  Created by 李钰潇 on 2020/12/15.
//

#include <iostream>
using namespace std;

int main() {
    double a,b,c;
    cout<<"请输入a,b,c=";
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && c+a>b)
    {
        if(a==b && b==c)
            cout<<"等边三角形"<<endl;
        else if (a==b || a==c || c==b)
            cout<<"等腰三角形"<<endl;
        else
            cout<<"一般三角形"<<endl;
    }
    else
        cout<<"不是三角形"<<endl;
}
