// A program to demonstrate the use of stringstream
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string s="12345";
    stringstream convert(s);
    int x=0;
    convert>>x;
    cout<<x;
}
