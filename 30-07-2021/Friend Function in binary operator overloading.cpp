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

    friend Complex operator+(Complex,Complex);

};

Complex  operator+(Complex oc1, Complex oc2 )
{
        Complex temp;
        temp.a= oc1.a+oc2.a;
        temp.b= oc1.b+oc2.b;
        return temp;
}


int main()
{
    Complex c1,c2,c3;
    c1.set_data(3,4);
    c2.set_data(5,6);

    c3= c1+c2;
    c3.show_data();
}
