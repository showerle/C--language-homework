
//  Created by 李钰潇 on 2021/4/21.
//假设某销售公司有一般员工、销售员工和销售经理。月工资的计算办法是：
//一般员工月薪=基本工资；
//销售员工月薪=基本工资+销售额提成率；
//销售经理月薪=基本工资+职务工资+销售额提成率。
//编写程序，定义一个表示一般员工的基类Employee，它包含三个表示员工基本信息的数据成员：编号number、姓名name和基本工资basicSalary。
//由Employee类派生销售员工Salesman类，Salesman类包含两个新数据成员：销售额sales和静态数据成员提成比例commrate。
//再由Salesman类派生表示销售经理的Salesmanager类。Salesmanager类包含新数据成员：岗位工资jobSalary。
//为这些类定义初始化数据的构造函数，以及输入数据input、计算工资pay和输出工资条print的成员函数。
//设公司员工的基本工资是2000元，销售经理的岗位工资是3000元，提成率=5/1000。在main函数中，输入若干个不同类型的员工信息测试你的类结构。

#include <iostream>
#include <cstring>
using namespace std;


class Employee //员工类
{
public:
    Employee(const char Snumber[]="\0",const char Sname[]="\0", double bSalary=2000 )
    {
    strcpy(number,Snumber);
    //字符串复制函数，strcpy把含有'\0'结束符的字符串复制到另一个地址空间，返回值的类型为char*
    strcpy(name,Sname);
    basicSalary=bSalary;
}
    
    void input()
{
        cout<< "编号：";
        cin>>number;
        cout<<"姓名：";
        cin>>name;
}
    
    void print()
{
        cout<<"员工:"<<name<<"\t\t编号："<<number<<"\t\t本月工资："<<basicSalary<<endl;
}
    
protected:  //保护类数据成员，派生类可见
    char number[5];
    char name[10];
    double basicSalary;
};

class Salesman : public Employee //销售员工类
{
public:
    Salesman(int sal=0) {sales=sal;} //初始化销售员工销售额为0
    
    void input()
    {
        Employee::input();   //调用基类input()函数
        cout<<"本月销售员工销售额：";
        cin>>sales;
    }
    
    void pay()
    {
       salary = basicSalary+sales*commrate;
    }
    
    void print()
    {
        pay();  //先计算销售员工工资
        cout<<"销售员 ："<<name<<"\t\t编号："<<number<<"\t\t本月工资："<<salary<<endl;
    }
    
protected:
    static double commrate;  //静态数据成员作用于类系统
    int sales;
    double salary;
};
double Salesman :: commrate=0.005;


class Salesmanager : public Salesman
{
public:
    Salesmanager(double jSalary=3000){jobSalary=jSalary;}  //岗位工资为默认参数
    
    void input()
    {
        Employee::input();
        cout<<"本月部门销售额：";
        cin>>sales;
    }
    
    void pay()
    {
        salary = basicSalary+sales*commrate+jobSalary;
    }
    
    void print()
    {
        pay();
        cout<<"销售经理 ："<<name<<"\t\t编号："<<number<<"\t\t本月工资："<<salary<<endl;
    }
    
private:
    double jobSalary;
};

int main()
{
    cout<<"基本员工\n";
    Employee emp1;
    emp1.input();
    emp1.print();
    cout<<"销售员\n";
    Salesman emp2;
    emp2.input();
    emp2.print();
    cout<<"销售经理\n";
    Salesmanager emp3;
    emp3.input();
    emp3.print();
}
