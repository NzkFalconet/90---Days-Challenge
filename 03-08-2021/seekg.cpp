#include<iostream>
#include<fstream>
using namespace std;
int main()
{

    ifstream fin;
    fin.open("demo1.txt");
    char ch;
    fin>>ch;
    cout<<ch;
    fin>>ch;
    cout<<ch;
    fin>>ch;
    cout<<ch;
    cout<<fin.tellg()<<endl;
    fin.seekg(2,ios_base::beg);
    cout<<fin.tellg();

}
