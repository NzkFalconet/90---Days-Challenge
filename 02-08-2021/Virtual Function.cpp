#include<iostream>
using namespace std;

class A
{
public:
  virtual  void f1(){
        cout<<"hello world"<<endl;
    }

};

class B:public A
{
public:

    void f1(){
        cout<<"how are you"<<endl;
    } //Method Overriding

};

int main()
{
    A a1,*p;
    B b1;
    p=&b1;
    p->f1();

}
