//
//  main.cpp
//  阅读程序11章
//
//  Created by 李钰潇 on 2021/5/26.
//

#include <iostream>
#include <fstream>
using namespace std;
//int main()
//{
//    int i;
//    ofstream ftxt1;
//    ftxt1.open( "D:\f1.txt", ios::out );
//    for( i=1; i<10; i++ )
//    ftxt1<<i<<" ";
//    ftxt1.close();
//    ifstream ftxt2;
//    ftxt2.open( "D:\f1.txt", ios::in );
//    while( !ftxt2.eof() )
//    { ftxt2>>i>>i;
//    cout<<i<<endl;
//    }
//}


int main()
{ int i;
ifstream f1( "D:\f1.txt", ios::in );
fstream f2;
f2.open( "D:\f2.dat", ios::out|ios::binary );
while(!f1.eof())
{ f1>>i;
i = i*5;
f2.write( ( char* ) &i, sizeof( int ) );
}
f1.close();
f2.close();
f2.open( "D:\f2.dat", ios::in|ios::binary );
do
{ f2.read( ( char* ) &i, sizeof( int ) );
cout<<i<<" ";
}while( i<30 );
cout<<endl;
f2.close();
}
