#include<iostream>
using namespace std;
class A
{
private:
    int a;

public:

    A(int x)
    {
        a=x;
    }
};

class B:public A
{
private:
    int b;
public:
    B(int x, int y):A(x)
    {
        b=x;


    }
   // B():A();
};


int main()
{
    B obj(2,3);

}
