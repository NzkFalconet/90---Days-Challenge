#include<iostream>
using namespace std;

class Complex
{
private:
    int a,b;
public:
    friend ostream& operator<<(ostream& , Complex);
    friend istream& operator>>(istream&, Complex&);


};

ostream& operator<<(ostream &dout, Complex C)
{
    cout<<"a :"<<C.a<<" and b :"<<C.b;
    return dout;
}

istream& operator>>(istream &din,Complex &C)
{
    cin>>C.a>>C.b;
    return din;
}

int main()
{
    Complex c1;
    cout<<"Please Enter a and b"<<endl;
    cin>>c1;
   // cin.operator>>(c1);
   cout<<"You Have Entered :"<<endl;
   cout<<c1;


}
