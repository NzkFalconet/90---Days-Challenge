#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    void set_data(int k,int j)
    {
        a=k;
        b=j;
    }
    void show_data()
    {
        cout<<"a is "<<a<<" and  b is "<<b<<endl;
    }


    friend Complex operator-(Complex);

};


Complex operator-(Complex X)
    {
        Complex temp;
        temp.a= -X.a;
        temp.b= -X.b;
        return temp;
    }

int main()
{
    Complex c1,c2;
    c1.set_data(5,8);
    c2= -c1;
    c2.show_data();

}
