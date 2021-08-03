#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("mydear.txt");
    cout<<fin.tellg()<<endl;
    cout<<(char)fin.get();
    cout<<(char)fin.get();
    cout<<(char)fin.get();
    fin.seekg(6);

    cout<<fin.tellg()<<endl;
     cout<<(char)fin.get()<<endl;
 cout<<fin.tellg()<<endl;
 fin.seekg(0,ios_base::end);
 cout<<fin.tellg()<<endl;
}
