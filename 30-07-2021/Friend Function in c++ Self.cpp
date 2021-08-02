#include<iostream>
using namespace std;

class Complex
{
private:
    int a,b;
public:
    void set_data(int x , int y)
    {
        a=x;
        b=y;
    }
    void show_data()
    {
        cout<<a<<b;
    }

    friend void fun(Complex);
};

 void fun(Complex c)
 {
     cout<<"the sum is "<<c.a+c.b;
 }

int main()
{
    Complex c1,c2;
    c1.set_data(3,4);
    fun(c1);


}
