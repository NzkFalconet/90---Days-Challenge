#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("true.txt");
    fout<<"helllllllo";
    ifstream fin;
    fin.open("myfile.txt");
    fin;
}
