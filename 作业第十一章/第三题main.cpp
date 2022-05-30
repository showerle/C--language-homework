//  main.cpp
//  c++作业第十一章
//  Created by 李钰潇 on 2021/5/19.
//  建立某单位职工通讯录的二进制数据文件，文件中的每个记录包括：职工编号、姓名、电话号码、邮政编码和住址。

#include <iostream>
#include <fstream>
using namespace std;
struct txrec
    {
    char no[6];
    char name[20];
    char tel[9];
    char postc[7];
    char addr[30];
    };


int main()
{
    int n,i;
    txrec gzrec;
    char filename[20];
    fstream outfile;
    cout << "请输入单位通讯录的文件名:" ;
    cin >> filename ;
    outfile.open( filename, ios::out|ios::binary );
    if ( !outfile )
    {
    cerr << "文件无法打开！" << endl ;
    abort();
    }
    cout << "请输入单位职工的人数:";
    cin >> n;
    for( i=1; i<=n; i++ )
    {
    cout << "请输入第"<< i <<"个职工的编号:" ;
    cin >> gzrec.no ;
    cout << "请输入第"<< i <<"个职工的姓名:" ;
    cin >> gzrec.name ;
    cout << "请输入第"<< i <<"个职工的电话号码:" ;
    cin >> gzrec.tel ;
    cout << "请输入第"<< i <<"个职工的邮政编码:" ;
    cin >> gzrec.postc ;
    cout << "请输入第"<< i <<"个职工的通信地址:" ;
    cin >> gzrec.addr ;
    outfile.write( ( char* )&gzrec,sizeof( txrec )) ;
    }
    outfile.close() ;
}

