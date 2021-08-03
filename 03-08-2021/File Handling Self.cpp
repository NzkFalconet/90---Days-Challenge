#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("mydear.txt");
    string s;
    s=fin.get();
    while(!fin.eof())
    {
        cout<<s;
        s=fin.get();
    }
    fin.close();

}
