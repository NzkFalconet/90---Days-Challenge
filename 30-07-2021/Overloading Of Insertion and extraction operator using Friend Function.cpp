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
    void show_data()
    {
        cout<<"a is "<<a<<" and b is "<<b<<endl;
    }


     friend ostream& operator<<(ostream&, Complex);
     friend istream& operator>>(istream&,Complex&);

};


ostream& operator<<(ostream &dout, Complex C)
{
    cout<<"a = "<<C.a<<" b = "<<C.b<<endl;
    return dout;
}

istream& operator>>(istream &din, Complex &C)
{
    cin>>C.a>>C.b;
    return din;
}


int main()
{
    Complex c1;
    cout<<"Enter A Complex Number "<<endl;
    cin>>c1;
    cout<<"You Entered :";
    cout<<c1;
}







