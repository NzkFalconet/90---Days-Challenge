#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    Complex(){}
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
        cout<<" a is "<<a<<" and b is "<<b<<endl;
    }
};

int main()
{
    Complex c;
    int x=6;
    c=6;
    c.show_data();
}
