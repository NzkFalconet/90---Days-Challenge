#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mult =n;
    for(int i=1;i<n;i++)
    {
        mult *= i;
    }
    cout<<mult;
    
}
