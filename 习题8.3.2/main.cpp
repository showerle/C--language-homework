//
//  main.cpp
//  阅读程序8.3.2
//
//  Created by 李钰潇 on 2021/5/22.
//

#include <iostream>
using namespace std;
//阅读程序8.3.2

//class Base1
//{ public :
//Base1( int i )
//{ cout << "调用基类Base1的构造函数:" << i << endl; }
//};
//class Base2
//{ public:
//Base2( int j )
//{ cout << "调用基类Base2的构造函数:" << j << endl; }
//};
//class A : public Base1, public Base2
//{ public :
//A( int a,int b,int c,int d ):Base2(b),Base1(c),b2(a),b1(d)
//{ cout << "调用派生类A的构造函数:" << a+b+c+d << endl; }
//private :
//Base1 b1;
//Base2 b2;
//};
//int main()
//{ A obj( 1, 2, 3, 4 );
//}



// 阅读程序8.5.2

//using namespace std;
//class A
//{ public :
//A(const char *s) { cout << s << endl; }
//~A() {}
//};
//class B : virtual public A
//{ public :
//B(const char *s1, const char *s2) : A( s1 ) { cout << s2 << endl; }
//};
//class C : virtual public A
//{ public :
//C(const char *s1, const char *s2):A(s1) { cout << s2 << endl; }
//};
//class D : public B, public C
//{ public :
//D( const char *s1,const char *s2,const char *s3,const char *s4 ):
//B( s1, s2 ), C( s1, s3 ), A( s1 )
//{ cout << s4 << endl; }
//};
//int main()
//{ D *ptr = new D( "class A", "class B", "class C", "class D" );
//delete ptr;
//}

//阅读程序9.1.1

//class Bclass
//{ public:
//Bclass( int i, int j ) { x = i; y = j; }
//int fun() { return 0; }
//protected: int x, y;
//};
//class Iclass: public Bclass
//{ public :
//Iclass(int i, int j, int k):Bclass(i, j) { z = k; }
//int fun() { return ( x + y + z ) / 3; }
//private : int z;
//};
//int main()
//{
//    Iclass obj( 2, 4, 10 );
//    Bclass p1 = obj;
//    cout << p1.fun() << endl;
//    Bclass &p2 = obj;
//    cout << p2.fun() << endl;
//    cout << obj.fun() << endl;
//    Iclass *p3 = &obj;
//    cout << p3-> fun() << endl;
//}


// 阅读程序10.2.1
//class Bclass
//{ public:
//Bclass( int i, int j ) { x = i; y = j; }
//int fun() { return 0; }
//protected: int x, y;
//};
//class Iclass: public Bclass
//{ public :
//Iclass(int i, int j, int k):Bclass(i, j) { z = k; }
//int fun() { return ( x + y + z ) / 3; }
//private : int z;
//};
//int main()
//{
//    Iclass obj( 2, 4, 10 );
//    Bclass p1 = obj;
//    cout << p1.fun() << endl;
//    Bclass &p2 = obj;
//    cout << p2.fun() << endl;
//    cout << obj.fun() << endl;
//    Iclass *p3 = &obj;
//    cout << p3-> fun() << endl;
//}


// 阅读程序9.3.1
class Bclass
{ public:
Bclass( int i, int j ) { x = i; y = j; }
int fun() { return 0; }
protected: int x, y;
};
class Iclass: public Bclass
{ public :
Iclass(int i, int j, int k):Bclass(i, j) { z = k; }
int fun() { return ( x + y + z ) / 3; }
private : int z;
};
int main()
{
    Iclass obj( 2, 4, 10 );
    Bclass p1 = obj;
    cout << p1.fun() << endl;
    Bclass &p2 = obj;
    cout << p2.fun() << endl;
    cout << obj.fun() << endl;
    Iclass *p3 = &obj;
    cout << p3-> fun() << endl;
}
