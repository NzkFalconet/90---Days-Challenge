#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("demo1.txt",ios::app);
    int pos;

    fout<<"shaan";
     pos=fout.tellp();
    cout<<pos;

    fout.close();
}

