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

    //Casting Operator
    operator int()
    {
        return a;
    }

    void show_data()
    {
        cout<<"a ="<<a<<" b ="<<b<<endl;
    }

};

int main()
{
    Complex c1;
    c1.set_data(3,4);
    c1.show_data();
    int x;
    x=c1;
    cout<<"x is "<<x;

}
