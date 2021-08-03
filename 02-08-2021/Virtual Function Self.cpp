#include<iostream>
using namespace std;

class A
{
private:
    int a,b;
public:
  virtual  void f1(){
        cout<<"hello world"<<endl;
    }

};

class B
{
private:
    int c,d;
public:
  void f1(){
        cout<<"hello world"<<endl;
    }



};

int main()
{
  B obj1;
  A obj2;
   cout<<"object of class A is "<<sizeof(obj2)<<endl;
  cout<<"object of class B is "<<sizeof(obj1)<<endl;




}
