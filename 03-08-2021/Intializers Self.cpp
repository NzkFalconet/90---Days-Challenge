#include<iostream>
using namespace std;

class fun
{
private:
    int a,b;
    const int c;
    int &y;
public:
    fun(int &n):c(4),a(1),b(2),y(n)
    {
        cout<<a<<" "<<b<<" "<<c<<" "<<y;
    }
};

int main()
{
    int m=6;
    fun f1(m);
}
