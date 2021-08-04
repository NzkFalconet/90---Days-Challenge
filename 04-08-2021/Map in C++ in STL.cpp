#include<iostream>
#include<map>
using namespace std;
int main()
{
    map <int, string> customer;
    customer[100]="Gajendra";
    customer[123]="Dilip";
    customer[145]="Aditya";
    customer[171]="Shahid";
    customer[200]="Rajesh";

    map <int , string> c{{100,"Rahul"},{200,"Sita"},{180,"Naman"},{145,"aditya"}
    };

    //map <int,string>:: iterator


  /*  cout<<customer[100]<<endl;
    cout<<customer[101]<<endl;
     cout<<customer[123]<<endl;
      cout<<customer[145]<<endl;



*/
    map <int, string> :: iterator p = customer.begin();
    while(p!=customer.end())
    {
        cout<<p->second<<endl;
        p++;
    }
    cout<<endl;
    cout<<customer.at(171)<<endl;
    cout<<customer.at(200)<<endl;

    cout<<"the size of customer map is "<<customer.size()<<endl;
    if(!customer.empty())
    {
        cout<<"array is not empty"<<endl;
    }
    else
    {
        cout<<" array is empty"<<endl;
    }
    customer.insert(pair<int,string>(300,"khaan"));
      map <int, string> :: iterator q = customer.begin();
    while(q!=customer.end())
    {
        cout<<q->second<<endl;
        q++;
    }
























}
