#include<iostream>
using namespace std;

class Complex
{
private:
    int a,b;
public:
    Complex (){}
    Complex(int k)
    {
        a=k;b=0;
    }
    void set_data(int x, int y)
    {
        a=x;b=y;
    }
    void show_data()
    {
        cout<<"a ="<<a<<" b ="<<b<<endl;
    }

};

int main()
{
    Complex c1;
    int x=6;
    c1=6;
    c1.show_data();
}
