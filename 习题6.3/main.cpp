//
//  main.cpp
//  阅读程序习题
//
//  Created by 李钰潇 on 2021/5/20.
//

#include <iostream>
class A
{ public :
A() { a = 5; }
    void printa() { std::cout << "A:a = " << a << std::endl; }
private :
int a;
friend class B;
};
class B
{ public:
void display1( A t )
    { t.a++; std::cout << "display1:a = " << t.a << std::endl; };
void display2( A t )
    { t.a--; std::cout << "display2:a = " << t.a << std::endl; };
};
int main()
{ A obj1;
B obj2;
obj1.printa();
obj2.display1( obj1 );
obj2.display2( obj1 );
obj1.printa();
};

