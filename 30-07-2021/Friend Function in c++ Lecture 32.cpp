#include<iostream>
using namespace std;
class B;
class A
{
private:
    int a;
public:
    friend void fun(A,B);
    void set_data(int x)
    {
        a=x;
    }
};
class B
{
private:
    int b;
public:
    friend void fun(A,B);
    void set_data(int y)
    {
        b=y;
    }
};

void fun(A o1, B o2)
{
    cout<<"the sum is: "<<o1.a+o2.b;
}

int main()
{
    A obj1;
    B obj2;
    obj1.set_data(3);
    obj2.set_data(12);
    fun(obj1,obj2);

}
