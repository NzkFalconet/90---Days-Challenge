#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("new.txt");
    string ch;
    fin>>ch;
    while(!fin.eof())
    {
        cout<<ch<<endl;
        fin>>ch;
    }
    fin.close();
}
