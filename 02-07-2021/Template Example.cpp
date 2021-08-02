#include<iostream>
using namespace std;
template <class X>
class Operator
{
private:
    X num1;
     X num2;
public:
    Operator(X n1,X n2)
    {
        num1=n1;
        num2=n2;
    }

    X add(){return num1+num2;}
    X subtract(){return num1-num2;}
    X multiple(){return num1*num2;}
    X divide(){return num1/num2;}

    void showCalculation()

    {
        cout<<"num1= "<<num1<<" and num2= "<<num2<<endl;
        cout<<"the addition of both number is "<<add()<<endl;
        cout<<"the subtraction of both number is "<<subtract()<<endl;
        cout<<"the multiple of both number is "<<multiple()<<endl;
        cout<<"the divide of both number is "<<divide()<<endl;


    }

};

int main()
{
    Operator <int> intop1(3,4);
    Operator <float> floatop1(3.3,4.4);
    intop1.showCalculation();
        floatop1.showCalculation();

}
