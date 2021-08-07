#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(auto val:a)
    {
        cout<<val<<endl;
    }
    cout<<"The max element in vector is: ";
    int max1= *max_element(a.begin(),a.end());
    cout<<max1<<endl;
    cout<<"The min element in vector is: ";
    int min1= *min_element(a.begin(),a.end());
    cout<<min1<<endl;

    cout<<"The sum of all elements in vector is: ";
    int sum = accumulate(a.begin(),a.end(),0);
    cout<<sum<<endl;


    int ct= count(a.begin(),a.end(),5);
    cout<<"The count of 5 in vector is: ";
    cout<<ct;
    auto it= find(a.begin(),a.end(),5);
    cout<<endl;
    if(it!=a.end())
    {
        cout<<*it<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    string s= "shankhan";
    reverse(s.begin(),s.end());
    cout<<s;
}
