//
//  main.cpp
//  阅读程序10.3
//
//  Created by 李钰潇 on 2021/5/24.
//

#include <iostream>
using namespace std;
template<typename T>
class Base
{ public:
Base( T i , T j ) { x = i; y = j; }
T sum() { return x + y; }
private:
T x, y;
};


int main()
{ Base<double> obj2(3.3,5.5);
cout << obj2.sum() << endl;
Base<int> obj1(3,5);
cout << obj1.sum() << endl;
}
