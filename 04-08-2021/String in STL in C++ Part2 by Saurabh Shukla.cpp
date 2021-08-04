#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1;
    s1="Hello";
    string s2=" Student";
    string s3;
    s1+=s2;
    //s2 +=s1;

    cout<<s1<<endl;
    cout<<s2<<endl;
    if(s1!=s2)
    {
        cout<<"strings are not same"<<endl;
    }
    else
    {
        cout<<"strings are same"<<endl;
    }

    string s4="shaan";
    char s5[]=" khaan";
    string s6;
    s6=s4+s5;
    cout<<s6<<endl;

}
