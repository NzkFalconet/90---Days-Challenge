#include<iostream>
using namespace std;

class A
{
private:
    int a,b;
    const int z;
    int &y;
public:
    A(int &n):a(5),b(4),z(4100),y(n)
    {

        cout<<a<<" "<<b<<" "<<z<<" "<<n;
    }
};

int main()
{
    int m=6;
    A a1(m);
}
