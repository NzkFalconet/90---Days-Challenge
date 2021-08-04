#include<iostream>
#include<list>
using namespace std;
int main()
{
    list <int> l1{1111,212,313,144,525,866};

    cout<<endl;
    cout<<"the size of list is "<<l1.size()<<endl;

    cout<<endl;
    l1.sort();
    cout<<"the sorted list is :"<<endl;
      list <int> :: iterator q= l1.begin();
    while(q!=l1.end())
    {
        cout<<*q<<" ";
        q++;
    }
    cout<<endl;
    l1.push_back(-10);
       list <int> :: iterator p= l1.begin();
    while(p!=l1.end())
    {
        cout<<*p<<" ";
        p++;
    }
      cout<<endl;
      l1.pop_back();
        l1.pop_back();
       list <int> :: iterator r= l1.begin();
    while(r!=l1.end())
    {
        cout<<*r<<" ";
       r++;
    }
    cout<<endl;
    l1.reverse();
       list <int> :: iterator s= l1.begin();
    while(s!=l1.end())
    {
        cout<<*s<<" ";
       s++;
    }
    cout<<endl;
           list <int> :: iterator t= l1.begin();
           l1.remove(212);
              list <int> :: iterator u= l1.begin();
    while(u!=l1.end())
    {
        cout<<*u<<" ";
       u++;
    }
             l1.remove(212);
              list <int> :: iterator v= l1.begin();
    while(v!=l1.end())
    {
        cout<<*v<<" ";
      v++;
    }
    cout<<endl;
    cout<<"list is clear :"<<endl;
             l1.clear();
              list <int> :: iterator x= l1.begin();
    while(x!=l1.end())
    {
        cout<<*x<<" ";
      x++;
    }






}
