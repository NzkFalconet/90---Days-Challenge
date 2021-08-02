#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;

    public:
        Complex(int x,int y)
        {
            a=x;
            b=y;
        }
        Complex(int k)
        {
            a=k;
        }
        Complex()
        {

        }

};

int main()
{
    Complex c1(3,4);
}
