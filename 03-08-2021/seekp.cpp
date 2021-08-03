#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("mydear.txt",ios::app);
    cout<<fout.tellp()<<endl;
    fout<<"ABCDEF";
     cout<<fout.tellp()<<endl;
    fout.close();



}
