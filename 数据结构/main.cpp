//  main.cpp
//  数据结构课程习题
//  Created by 李钰潇 on 2021/4/16.


#include <iostream>
using namespace std;
const int n=34,m=2;//设有十个人，报到2的人出列
int a[n+1],j=n,k=1,p=0;
int main()
{
    for(int i=1;i<n;i++)
        a[i]=i+1;   //建立链表
    a[n]=1;   //第n个人指向第1个人  ，形成一个环
    while(p<n)   //n个人均出列为止
    {
        while(k<m)   //报数   计数器加一
        {
            j=a[j];
            k++;
        }
        cout<<a[j]<<endl;  //数到m此人出列  计数器置一
        p++;  //出列人数加一
        a[j]=a[a[j]];
        k=1;
    }
    return 0;
}
