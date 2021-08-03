#include<iostream>
using namespace std;

class dummy
{
private:
    int a,b;
    int *p;
public:


    dummy()
    {
       p= new int;
    }
    void set_data(int x, int y,int z)
    {
        a=x;
        b=y;
       *p=z;
    }


    void show_data()
    {
        cout<<"a = "<<a<<" b = "<<b<<" and pointer's value is "<<*p<<" and the address stored by p pointer is "<<p<<endl;
    }
    dummy (dummy &d)
    {
        a=d.a;
        b=d.b;
        p= new int;
        *p = *(d.p);
    }
    ~dummy()
    {
        delete p;
    }

};

int main()
{
    dummy d1;
    d1.set_data(3,4,5);
    dummy d2=d1;
    d1.show_data();
    d2.show_data();

}
