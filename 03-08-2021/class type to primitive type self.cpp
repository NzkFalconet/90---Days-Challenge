#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;
public:

    operator int()
    {
        return a;
    }
    void set_data(int x, int y)
    {
        a=x;b=y;
    }
    void show_data()
    {
        cout<<"a is "<<a<<" and b is "<<b<<endl;
    }
};

int main()
{
    Complex c;
    c.set_data(3,4);
    int x;
    x=c;
    c.show_data();
    cout<<"x is "<<x<<endl;
}
