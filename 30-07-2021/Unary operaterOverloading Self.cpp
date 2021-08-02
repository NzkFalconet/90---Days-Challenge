#include<iostream>
using namespace std;
class Complex
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
            cout<<"a is "<<a<<" and b is "<<b<<endl;
        }

        Complex operator-()
        {
            Complex temp;
            temp.a= -a;
            temp.b= -b;
            return temp;
        }


};

int main()
{
    Complex c1,c2;
    c1.set_data(3,4);
    c2= c1.operator -();
    c2.show_data();

}
