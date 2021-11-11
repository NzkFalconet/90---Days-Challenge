#include<bits/stdc++.h>
using namespace std;
int mid=0;
int temp;
vector<int>v;
void push(int x)
{
   if(v.size()==0)
   {
       v.push_back(x);

   }
   else if(v.size()%2!=0)
   {
        mid++;
       v.push_back(x);
   }
   else if(v.size()%2==0)
   {
       v.push_back(x);
   }
}

void pop()
{
   if(v.size()==0)
   {
       cout<<"No element in stack"<<endl;

   }
   else if(v.size()%2!=0)
   {
       v.pop_back();
   }
   else if(v.size()%2==0)
   {
       mid--;
       v.pop_back();
   }
}

void Middle()
{
    cout<<"middle element is "<<v[mid]<<endl;
}

int main()
{

   push(11);
    push(22);
    push(33);
    push(44);
    push(55);
    push(66);
    push(77);
    pop();
    pop();
    pop();
    Middle();



}
