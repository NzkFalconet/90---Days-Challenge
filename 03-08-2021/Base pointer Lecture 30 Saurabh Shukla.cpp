#include<iostream>
using namespace std;
class A
{
    int a;
public:

    void fun1()
    {
        cout<<"fun1 was called"<<endl;
    }
};

class B: public A
{
    int b;
public:

    void fun2()
    {
        cout<<"fun2 was called"<<endl;
    }
};

void fun()
{
  B *p = new B;
   p->fun1();
   p->fun2();
   delete p;
}

int main()
{
    fun();
}
