#include<iostream>
using namespace std;

class Complex
{
    private:
        int a,b;
    public:
        Complex(int x, int y)
        {
            a=x;
            b=y;
            cout<<"a is "<<a<<" b is "<<b<<endl;

        }
        Complex(int k)
        {


            cout<<"sum is "<<k<<endl;
        }
        Complex()
        {
            a=0;
            b=55;
            cout<<a+b;
        }

};

int main()
{
    Complex c1= Complex(2,100);
    Complex c2=511;
    Complex c3;


}
