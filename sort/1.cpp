/*************************************************************************
	> File Name: 1.cpp
	> Author:   Orange512
	> Mail:     huiyi950512@gmail.com
	> Created Time: 2018年03月23日 星期五 11时18分10秒
 ************************************************************************/

#include<iostream>
using namespace std;
class A
{
        virtual void fun() {}

};

class B
{
        virtual void fun2() {}

};
class C : virtual public  A, virtual public B
{
    public:
        virtual void fun3() {}

};
int main()
{
    C c;
    A a;
    B b;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(c)<<endl;
}
