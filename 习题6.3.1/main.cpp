//
//  main.cpp
//  6.3.1
//
//  Created by 李钰潇 on 2021/5/20.
//

//#include <iostream>
//using namespace std;
//class T
//{ public:
//T(int x) { a=x; b+=x; };
//static void display(T c) { cout<<"a="<<c.a<<'\t'<<"b="<<c.b<<endl; }
//    static int b;
//private:
//int a;
//};
//int T::b=5;
//
//
//int main()
//{ T A(3);
//    cout<<"static b="<<A.b<<endl;
//T B(5);
//T::display(A);
//T::display(B);
//}

//#include<iostream>
//using namespace std;
//class A
//{ public :
//A() { a = 5;
//    cout << "object A has been created"<<endl;}
//void printa() { cout << "A:a = " << a << endl; }
//private :
//int a;
//friend class B;
//};
//
//
//class B
//{ public:
//void display1( A t )
//{ t.a++; cout << "display1:a = " << t.a << endl; };
//void display2( A& t )
//{ t.a--; cout << "display2:a = " << t.a << endl; };
//};
//int main()
//{ A obj1;
//B obj2;
//obj1.printa();
//obj2.display1( obj1 );
//obj2.display2( obj1 );
//obj1.printa();
//}

//#include<iostream>
//using namespace std;
//template<typename T>
//double average(T*array,int size)
//{T sum=0;
//for(int i=0;i<size;i++)
//sum+=array[i];
//return sum/size;
//}
//int main()
//{int a[] = {1,2,3,4,5,6,7,8,9,10};
//double b[] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10};
//cout<<"Averageofarraya:"<<average(a,10)<<endl;
//cout<<"Averageofarrayb:"<<average(b,10)<<endl;
//
//}


#include<iostream>
#include<iomanip>
//using namespace std;
int main()
{
    std::cout<<std::setfill("*")<<std::setw(10)<<"Hello!"<<std::endl;
}


