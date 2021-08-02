#include<iostream>
using namespace std;

class Complex
{
private:
    int a,b;
public:
    void set_data(int x, int y)
    {
        a=x;b=y;
    }
    void show_data()
    {
        cout<<"a is "<<a<<" and b is "<<b<<endl;
    }

    friend void sum(Complex);

};

void sum(Complex c)
{

    cout<<"the sum is "<<c.a+c.b;
}

int main()
{
    Complex c1,c2;
    c1.set_data(2,10);
    sum(c1);
}
