//
//  打印正方形.cpp
//  使用迭代公式算平方根
//
//  Created by 李钰潇 on 2020/12/15.
//

#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"请输入正方形边长：";
    cin>>n;
    for(i=1; i<=n; i++) //打印n行
    {
        for(j=1;j<=n; j++) //打印n列
        {
            if(i==1 || i==n || j==1 || j==n) //如果位于第一行或者最后一行，第一列或者最后一列，打印星星
                cout<<"*";
            else
                cout<<" ";
        }
    }
}
