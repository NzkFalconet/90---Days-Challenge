#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    void set_data(int x,int y)
    {
        a=x;b=y;
    }
    void show_data()
    {
        cout<<"a : "<<a<<" and b is "<<b<<endl;
    }

    friend istream& operator >>(istream&, Complex&);
    friend ostream& operator<<(ostream&, Complex);

};

ostream& operator<<(ostream &dout, Complex C)
{
    cout<<"a is :"<<C.a<<" and b is :"<<C.b;
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
    cout<<"Please enter a complex number :"<<endl;
    cin>>c1;
    cout<<"You Have Enter :";
    cout<<c1;
}
