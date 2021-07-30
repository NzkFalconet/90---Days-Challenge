#include<iostream>
#include<conio.h>
using namespace std;

class complexNumber
{
    private:
    int a,b;

    public:
        void copyNumber(int x, int y)
        {
            a=x;
            b=y;
        }
        void showNumber()
        {
            cout<<"a is "<<a<<" and b is "<<b<<endl;
        }

};

int main()
{
    complexNumber c1;
    c1.copyNumber(2,4);
    c1.showNumber();
}
