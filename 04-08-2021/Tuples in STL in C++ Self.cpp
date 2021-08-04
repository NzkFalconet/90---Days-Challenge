#include<iostream>
#include<tuple>
using namespace std;
int main()
{
    tuple <string , int, float > t1;
    t1= make_tuple("shaan",300,2.5);
    cout<<get<0>(t1)<<" ";
      cout<<get<1>(t1)<<" ";
        cout<<get<2>(t1)<<" ";
}
