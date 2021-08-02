#include<iostream>
using namespace std;

class A
{
public:
    void f1(){
        cout<<"hello world"<<endl;
    }
    void f2(){
        cout<<"f2 of A class is called";
    }

};

class B:public A
{
public:

    void f1(){
        cout<<"how are you"<<endl;
    } //Method Overriding
    void f2(int x){
        cout<<"f2 of B class is called"<<endl;
    }
};

int main()
{

    B b1;
    b1.f1();
    b1.f2();
}
