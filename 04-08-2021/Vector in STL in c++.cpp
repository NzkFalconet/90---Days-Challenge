#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //define--
   // vector <int> v1{10,20,30};
   // cout<<v1.size();
  /* vector <int> v1{10,2030,40,50,60};
   vector <char> v2(4);
   vector <int> v3(5,10);
   vector <string>v4(3);
   for(int i=0;i<v1.size();i++)
   {
         cout<<v1[i]<<endl;
   }
*/
//PUSHBACK Function
//vector <int> v1={1,2,3,4};
//v1.push_back(5);
//cout<<v1[4];
//cout<<"capacity of vector v1 is :"<<v1.capacity();
/*v1.pop_back();
   for(int i=0;i<v1.capacity();i++)
   {
         cout<<v1[i]<<endl;
   }
   v1.pop_back();
   for(int i=0;i<v1.capacity();i++)
   {
         cout<<v1[i]<<endl;
   }
    v1.pop_back();
   for(int i=0;i<v1.capacity();i++)
   {
         cout<<v1[i]<<endl;
   }
   v1.pop_back();
   for(int i=0;i<v1.capacity();i++)
   {
         cout<<v1[i]<<endl;
   }
   v1.pop_back();
   for(int i=0;i<v1.capacity();i++)
   {
         cout<<v1[i]<<endl;
   }
   v1.pop_back();
   for(int i=0;i<v1.capacity();i++)
   {
         cout<<v1[i]<<endl;
   }
   v1.pop_back();
   for(int i=0;i<v1.capacity();i++)
   {
         cout<<v1[i]<<endl;
   }
*/
/*vector <int> v1{1,2,3};
v1.pop_back();
for(int i=0;i<v1.size();i++)
{
    cout<<v1[i];
}

cout<<"the size of"<<v1.size()<<endl;
cout<<"the capacity of vector is" <<v1.capacity()<<endl;
*/


vector <int> v1;
for(int i=0;i<10;i++)
{
    v1.push_back(i+1);

}

for(int i=0;i<10;i++)
{
    cout<<v1[i]<<endl;

}
cout<<endl;

vector <int> :: iterator it= v1.begin();
v1.insert(it+2,11);

for(int i=0;i<v1.size();i++)
{
    cout<<v1[i]<<endl;

}








}
