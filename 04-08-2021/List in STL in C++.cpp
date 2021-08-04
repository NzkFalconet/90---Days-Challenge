#include<iostream>
#include<list>
using namespace std;
int main()
{
    list <int> l1{11,22,33};
    list <string> l2{"India","Islamabad","Dhaka"};
    list <int> :: iterator p= l1.begin();
    while(p!=l1.end())
    {
        cout<<*p<<" ";
        p++;
    }

}
