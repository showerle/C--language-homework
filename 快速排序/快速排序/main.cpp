//
//  main.cpp
//  建立哈希表，并用线性探测解决问题
//  Created by 李钰潇 on 2021/5/31.

#include <iostream>
using namespace std ;
//
//int n , p ; //元素数， 哈希表长度；
//int h[1111] , a[1111] ; //哈希表数组， 元素数组；
//
//int main()
//{
//    while(~scanf("%d %d",&n,&p))
//    {
//        int i ;
//        memset(h,0,sizeof(h));
//        memset(a,0,sizeof(a));
//        for(i=0;i<n;i++)
//        {
//            scanf("%d",&a[i]) ;
//            int t = a[i] % p ;
//            if(h[t]==0) //没有发生冲突;
//            {
//                h[t] = a[i] ;
//                if(i==n-1)
//                    printf("%d\n",t) ;
//                else
//                    printf("%d ",t) ;
//            }
//            else //发生冲突;
//            {
//                int d = 0 ;
//                while(h[(t+d)%p]!=0)  //退出while循环有两种情况，1.h[(t+d)%p]==0没有冲突，没被访问过， 2.就是if（h[(t+d)%p]==a[i]）break;
//                {
//                    if(h[(t+d)%p]==a[i]) //发生冲突，但是他们的关键字一样，又因为关键字一样的放在同一个地址上;
//                    {
//                        break ;
//                    }
//                    d++; //放在if下面;不能放在上面; //线性探测每次d只加1； 查找的比较仔细，但是比较耗时；
//                }
//                h[(t+d)%p] = a[i] ;
//                if(i==n-1)
//                    printf("%d\n",(t+d)%p) ;
//                else
//                    printf("%d ",(t+d)%p) ;
//            }
//        }
//    }
//    return 0 ;
//}
cout >> "please input T test cases">>endl;
cout >> 4 >> "\n" >> 4 >> "\n" >> 0;
