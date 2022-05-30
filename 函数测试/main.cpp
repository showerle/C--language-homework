//
//  main.cpp
//  函数测试
//
//  Created by 李钰潇 on 2020/12/16.
//

//编写一个程序，测试三个函数，它们都能够把main函数中的变量count的值增至原来的三倍。这三个函数说明如下：
//（a）tripleByValue函数通过值传递count的一份副本，把值增至原来的三倍并返回这一结果。
//（b）tripleByReference函数通过引用参数传递count，用别名（即引用参数）把count原来的值增至三倍。
//（c）tripleByPointer函数通过指针参数传递count的地址，用间址方式把count原来的值增至三倍。(本题分数:10)

#include <iostream>
using namespace std;
// 第三章21

double tripleByValue(double x)
{return x * 3;}
void tripleByReference(double &x)
{x = x * 3;}
void tripleByPointer(double *x)
{*x = *x * 3;}
// int main() {
//double count;

//cout<<"1, Please input count: ";
//cout<<"tripleByValue: "<<tripleByValue(count)<<endl;
//cout<<"2, Please input count: ";
//tripleByReference(count);
//cout<<"tripleByReference: "<<count<<endl;
//cout<<"3, Please input count: ";
//tripleByPointer(&count);
//cout<<"tripleByPointer: "<<count<<endl;}

//第三章22 改写下列函数为递归函数
 void print( int w )
{  for( int i = 1 ; i <= w ; i++ )
   {  for( int j = 1 ; j <= i ; j++ )
      cout << i << " " ;
      cout << endl ;
   }
}
// int main()
{  print( 5 ) ;  }


void print(int w)
{
    int i;
    if(w)
    {
        print(w-1); // 使用递归函数
        for(i=1;i<=w;i++)
        {
            cout<<w<<' ';
        }
        cout<<endl;
    }
}
// int main()
{
    print(5);
}

// 23.输入a、b和c的值，编写一个程序求这三个数的最大值和最小值。要求：把求最大值和最小值操作编写成一个函数，并使用指针作为形式参数把结果返回main函数
void fmaxmin(double,double,double,double *,double *);
// int main()
{
    double a,b,c,max,min;
    cout<<"请输入a,b,c=";
    cin>>a,b,c;
    void fmaxmin(a,b,c,&max,&min) // 引用参数地址
        cout<<'max='<<max<<endl;
        cout<<'min='<<min<<endl;
}

void fmaxmin(double x,double y,double z,double *pmax,double *pmin)
{
    double max,min;
    if(x>y)
        max = x;
        min = y;
    else
        max = y;
        min = x;
    if(z>max)
        max = z;
    else
        if(z<min)
            min = z;
    *pmax = max;
    *pmin = min;
}

//24.输入a、b和c的值，编写一个程序求这三个数的最大值和最小值。要求：把求最大值和最小值操作编写成一个函数，并使用引用作为形式参数把结果返回main函数

void fmaxmin(double,double,double,double &,double &);
// int main()
{
    double a,b,c,max,min;
    cout<<"请输入a,b,c=";
    cin>>a,b,c;
    void fmaxmin(a,b,c,max,min) // 引用参数地址
        cout<<'max='<<max<<endl;
        cout<<'min='<<min<<endl;
}

void fmaxmin(double x,double y,double z,double &pmax,double &pmin)
{
    double max,min;
    if(x>y)
        max = x;
        min = y;
    else
        max = y;
        min = x;
    if(z>max)
        max = z;
    else
        if(z<min)
            min = z;
    pmax = max;
    pmin = min;
}


//递归测试
void printN(int N)
{
    if(N){
        printN(int N-1)
        printf("%d/n",N)
    }
    return;
}

