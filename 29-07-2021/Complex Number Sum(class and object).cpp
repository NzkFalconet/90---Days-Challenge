#include<iostream>
#include<conio.h>
using namespace std;

class complex_number
{
    private:
        int a,b;
    public:
        void set_data(int x, int y)
        {
            a=x;
            b=y;
        }
        void show_data()
        {
            cout<<"real part of complex number is : "<<a<<" and imaginary part is: "<<b;
        }
        complex_number add(complex_number c)
        {
            complex_number temp;
            temp.a = a+c.a;
            temp.b = b+c.b;
            return temp;
        }
};

int main()
{
    complex_number c1;
    complex_number c2;
    c1.set_data(3,4);
    c2.set_data(5,6);
    complex_number c3;
    c3 = c1.add(c2);
    c3.show_data();

}
