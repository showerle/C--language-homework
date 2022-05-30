//  main.cpp
//  c++第十章模板
//  Created by 李钰潇 on 2021/5/19.
//  把第7章综合练习的程序设计第3题的Vector类改写为模板类，使向量的数据成员为抽象类。main函数用int和double实例化，测试Vector类。

#include <iostream>
using namespace std;
template<typename T> class Vector
{
    private:
    T *v;
    int len;
    public:
    Vector(int size);
    Vector(double *, int);
    ~Vector();
    T& operator[](int i);
    Vector & operator=(Vector &);
    friend Vector operator +(Vector &,Vector &);
    friend Vector operator -(Vector &,Vector &);
    friend T operator *(Vector &,Vector &);
    friend ostream & operator <<(ostream &output,Vector &);
    friend istream & operator >>(istream &input,Vector &);
};


template<typename T>
Vector<T>::Vector (int size)
{
        if(size<=0||size>=2147483647)
        { cout<<"The size of "<<size<<"is overflow!\n";
        abort();
    }
    v=new double [size];
    for(int i=0;i<size;i++)v[i]=0;
    len=size;
}


template<typename T>
Vector<T>::Vector(double* C,int size)
{
if(size<=0||size>=2147483647)
{ cout<<"The size of"<<size<<"is overflow!\n"<<endl;
abort();
}
v=new double[size];
len=size;
for(int i=0;i<len;i++) v[i]=C[i];
}


template<typename T>
Vector<T>::~Vector()
{
    delete []v;
    v=NULL; len=0;
}


template<typename T>
T& Vector<T>::operator[](int i)
{
    if(i>=0 && i<len)
        return v[i];
    else
        { cout<<"The size of"<<i<<"is overflow!\n";
        abort();
    }
}

template Vector &Vector::operator =(Vector &C)
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


template Vector operator +(Vector &A,Vector &B) //向量相加
{
int size=A.len ;
T *v=new T[size];
if(sizeB.len)
{
for(int i=0;i<size;i++)
v[i]=A[i]+B[i];
return Vector (v,size);
}
else
{
cout<<"Operator + fail!\n";
abort();
}
}


template Vector operator -(Vector &A,Vector &B) //向量相减
{
int size=A.len ;
T v=new T[size];
if(sizeB.len)
{ for(int i=0;i<size;i++)
v[i]=A[i]-B[i];
return Vector (v,size);
}
else
{
cout<<"Operator - fail!\n";
abort();
}
}


template T operator *(Vector &A,Vector &B) //向量相乘
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
cout<<"Operator * fail!\n";
abort();
}
}


template ostream & operator <<(ostream &output,Vector &A) //输出
{
int i;
output<<"(";
for( i=0;i<A.len-1;i++)
output<<A[i]<<",";
output<<A[i]<<")";
return output;
}
template istream & operator >>(istream &input,Vector &A) //输入
{
for(int i=0;i<A.len;i++)
input>>A[i];
return input;
}



int main()
{
    int k1,k2,k3;double t;
    cout<<"Input the length of Vector A:\n";
    cin>>k1;
    Vector A(k1);
    cout<<"Input the elements of Vector A:\n";
    cin>>A;
    cout<<"Input the length of Vector B:\n";
    cin>>k2;
    Vector B(k2);
    cout<<"Input the elements of Vector B:\n";
    cin>>B;
    cout<<"Input the length of Vector C:\n";
    cin>>k3;
    Vector C(k3);
    cout<<"A="<<A<<endl;
    cout<<"B="<<B<<endl;
    C=A+B;
    cout<<"A+B="<<A<<"+"<<B<<"="<<C<<endl;
    C=A-B;
    cout<<"A-B="<<A<<"-"<<B<<"="<<C<<endl;
    t=AB;
    cout<<"AB="<<A<<"”<<B<<”="<<t<<endl;
}
