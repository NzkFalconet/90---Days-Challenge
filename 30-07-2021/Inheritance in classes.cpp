#include<iostream>
using namespace std;

class A
{
private:
    int a;
protected:
    void setValue(int x)
    {
        a=x;
    }
};

class B: public A
{
public:
    void setData(int k)
    {
        setValue(k);
    }
};


int main()
{
    B obj;
    obj.setData(4);


}
