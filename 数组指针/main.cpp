//
//  main.cpp
//  数组指针
//
//  Created by 李钰潇 on 2020/12/17.
//

#include <iostream>
#include <iomanip>
using namespace std;
struct Data
{ int n;
double score;
};
int main()
{ Data a[3] = { 1001,87,1002,72,1003,90 }, *p = a;
cout << (p++)->n << endl;
cout << (p++)->n << endl;
cout << p->n++ << endl;
cout << (*p).n++ << endl;
}
