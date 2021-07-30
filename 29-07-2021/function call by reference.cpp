
#include<iostream>
using namespace std;

int sum(int &x, int &y)
{
    return x+y;
}
int main()
{
    int a,b;
    cout<<"enter a and b values respectivily"<<endl;
    cin>>a>>b;
    int s= sum(a,b);
    cout<<"the sum is "<<s<<endl;


}
