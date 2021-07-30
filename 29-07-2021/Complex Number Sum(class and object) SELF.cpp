#include<iostream>
#include<conio.h>
using namespace std;

class complexNumber
{
    private:
        int a,b;
    public:
        void set_data()
        {
            int x; int y;
            cout<<"enter a: ";
            cin>>x;
            cout<<"enter b: ";
            cin>>y;
            a=x;
            b=y;

        }

        void show_data()
        {
            cout<<"real part is :"<<a<<" and imaginary part is :"<<b<<endl;
        }

        complexNumber add (complexNumber c)
        {
            complexNumber temp;
            temp.a= a+c.a;
            temp.b= b+c.b;
            return temp;
        }

};


int main()
{

    complexNumber c1;
    complexNumber c2;
    c1.set_data();
    c2.set_data();
    //c3 = c1+c2;
    complexNumber c3;
    c3 = c1.add(c2);
    c3.show_data();



}
