//  第四题.cpp
//  c++作业第十一章
//  Created by 李钰潇 on 2021/5/19.
//  从键盘输入职工的编号，在第3题所建立的通讯录文件中查找该职工资料。查找成功后，显示职工的姓名、电话号码、邮政编码和住址。

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
    struct txrec gzrec; int i;
    char filename[20], num[6];
    fstream infile;
    cout << "请输入单位通讯录文件名:";
    cin >> filename ;
    infile.open( filename, ios::in|ios::binary );
        
    if ( !infile )
    {
        cerr << "文件无法打开！" << endl;
        abort();
    }
    infile.seekg( 0,ios::end );
    long posend = infile.tellp();
    infile.seekg( 0,ios::beg );
    cout << "请输入职工编号:" ;
    cin >> num;
    
    do
    {
        infile.read(( char * )&gzrec,sizeof( txrec ));
    }
    while ( strcmp( gzrec.no,num ) != 0 && long(infile.tellp()) != posend );
    
    if ( strcmp( gzrec.no,num ) == 0 )
    {
        cout << "找到该职工所在记录！" << endl;
        cout << "编号:" << gzrec.no << endl;
        cout << "姓名:"<< gzrec.name << endl;
        cout << "电话号码:"<< gzrec.tel << endl;
        cout << "邮政编码:" << gzrec.postc << endl;
        cout << "通信地址:" << gzrec.addr << endl;
    }
    else
    {
        cout << "该职工的记录找不到！" << endl;
    }
    infile.close();
}
