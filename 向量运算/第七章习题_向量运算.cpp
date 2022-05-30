//  第七章习题_向量运算.cpp
//  函数测试
//  Created by 李钰潇 on 2021/4/7.

#include "第七章习题_向量运算.hpp"
#include <iostream>
using namespace std;
// 编写程序定义向量类Vector，重载运算符+、、和=，实现向量之间的加、减、乘、赋值运算；重载运算符>>、<<实现向量的输入、输出功能。注意检测运算的合法性。
class Vector
{
    private:
    double *v;
    int len;
    public:
    Vector(int size);
    Vector(double *,int);
    ~Vector();
    double &operator[](int i);
    Vector & operator =(Vector &);
    friend Vector operator +(Vector &,Vector &);
    friend Vector operator -(Vector &,Vector &);
    friend double operator *(Vector &,Vector &);
    friend ostream & operator <<(ostream &output,Vector &);
    friend istream & operator >>(istream &input,Vector &);
};

Vector::Vector (int size)
{
    if(size<=0||size>=2147483647)
    { cout<<"The size of"<<size<<"is overflow!\n";
    abort();
    }
    v=new double [size];
    for(int i=0;i<size;i++) v[i]=0;
    len=size;
}

Vector::Vector(double C,int size)
{
    if(size<=0||size>=2147483647)
    { cout<<"The size of"<<size<<"is overflow!\n"<<endl;
    abort();
    }
    v=new double[size];
    len=size;
    for(int i=0;i<len;i++) v[i]=C[i];
}

Vector::~Vector()
{
    delete []v;
    v=NULL; len=0;
    }
    double &Vector::operator[](int i)
    {
    if(i>=0 && i<len)
    return v[i];
    else
    { cout<<"The size of"<<size<<"is overflow!\n";
    abort();}
}

Vector &Vector::operator =(Vector &C)
{
    if(lenC.len)
    {
    for(int i=0;i<len;i++)
    v[i]=C[i];
    return *this;
    }
    else
    {
    cout<<"Operator = fail!\n";
    abort();
    }
}

Vector operator +(Vector &A,Vector &B) // 向量相加
{
    int size=A.len ;
    double *T=new double[size];
    if(sizeB.len)
    {
    for(int i=0;i<size;i++)
    T[i]=A[i]+B[i];
    return Vector (T,size);
    }
    else
    {
    cout<<"Operator + fail!\n";
    abort();
    }
}

Vector operator -(Vector &A,Vector &B) //向量相减
{
    int size=A.len ;
    double T=new double[size];
    if(sizeB.len)
    { for(int i=0;i<size;i++)
    T[i]=A[i]-B[i];
    return Vector (T,size);
    }
    else
    {
    cout<<"Operator - fail!\n";
    abort();
    }
}

double operator *(Vector &A,Vector &B) //向量相乘
{
    int size=A.len ;
    double s=0;
    if( sizeB.len )
    {
    for( int i=0; i<size; i++ )
    s+=A[i]B[i];
    return s;
    }
    else
    {
    cout<<“Operator * fail!\n”;
    abort();
    }
}

ostream & operator <<(ostream &output,Vector &A) //输出
{
    int i;
    output<<’(’;
    for( i=0;i<A.len-1;i++)
    output<<A[i]<<’,’;
    output<<A[i]<<’)’;
    return output;
}

istream & operator >>(istream &input,Vector &A) //输入
{
    for(int i=0;i<A.len;i++)
    input>>A[i];
    return input;
}


int main()
{
    int k1,k2,k3;double t;
    cout<<“Input the length of Vector A:\n”;
    cin>>k1;
    Vector A(k1);
    cout<<“Input the elements of Vector A:\n”;
    cin>>A;
    cout<<“Input the length of Vector B:\n”;
    cin>>k2;
    Vector B(k2);
    cout<<“Input the elements of Vector B:\n”;
    cin>>B;
    cout<<“Input the length of Vector C:\n”;
    cin>>k3;
    Vector C(k3);
    cout<<“A=”<<A<<endl;
    cout<<“B=”<<B<<endl;
    C=A+B;
    cout<<“A+B=”<<A<<"+"<<B<<"="<<C<<endl;
    C=A-B;
    cout<<“A-B=”<<A<<"-"<<B<<"="<<C<<endl;
    t=AB;
    cout<<"AB="<<A<<"”<<B<<”="<<t<<endl;
}
