#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("new.txt");
    string ch;
    ch= fin.get();
    while(!fin.eof())
    {
        cout<<ch;
        ch= fin.get();
    }
    fin.close();
}
