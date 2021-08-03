#include<iostream>
#include<fstream>
using namespace std;
int main()
{

    ofstream fout;
    fout.open("demo1.txt",ios::app);
    fout<<"ABCDEFG";
    cout<<fout.tellp()<<endl;
    fout.seekp(2,ios_base::end);
    cout<<fout.tellp()<<endl;



}
