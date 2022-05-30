//  第九章_教职工类.cpp
//  Created by 李钰潇 on 2021/4/21.
//

#include "第九章_教职工类.hpp"
#include <iostream>
using namespace std;
class staff //定义教职工抽象类
{
public:
    staff ( double bSalary)
    {
        basicSalary=bSalary;
    }
    
virtual void input() = 0; //纯虚函数
virtual void output() = 0;
    
protected:
    char name[30];
    double basicSalary;
};


class teacher : public staff
{
public:
    teacher( int basicsalary=3000 ) : staff( basicsalary ){ }
    
    void input()
{
    cout<<"姓名？";
    cin>>name;
    cout<<"职称 1，教授 2，副教授 3，讲师（输入1，2 或 3）：";
    cin>>title;
    cout<<"课时?";
    cin>>coursetime;
}
    
    void output()
        {
        double salary;
        switch(title)
        {
        case 1: salary = basicSalary+coursetime*50;
                break;
        case 2: salary = basicSalary+coursetime*30;
                break;
        case 3: salary = basicSalary+coursetime*20;
        }
        cout<<"姓名："<<name<<"\t本月工资："<<salary<<endl;
        }
    
protected:
    int coursetime;
    int title;
};


class manage : public staff
{
public:
    manage( int basicsalary=2500 ) : staff( basicsalary ){ }
    
    void input()
    {
        cout<<"姓名？";
        cin>>name;
        cout<<"职务工资？";
        cin>>jobSalary;
    }
    void output()
    {
        double salary;
        salary = basicSalary+jobSalary;
        cout<<"姓名："<<name<<"\t本月工资："<<salary<<endl;
    }
protected:
   double jobSalary;
};


class technician : public staff
{
public:
    technician( int basicsalary=2000 ) : staff( basicsalary ){ }
    
    void input()
        {
        cout<<"姓名？";
        cin>>name;
        cout<<"工作日？";
        cin>>workdays;
        }
    
    void output()
    {
        double salary;
        salary = basicSalary+workdays*20;
        cout<<"姓名："<<name<<"\t本月工资："<<salary<<endl;
    }
protected:
    int workdays;
};


int main()
{
    teacher t;
    t.input();
    t.output();
    manage m;
    m.input();
    m.output();
    technician h;
    h.input();
    h.output();
}
