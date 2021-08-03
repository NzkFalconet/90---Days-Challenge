#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ofstream fout;
  char ch;
  fout.open("mydear.txt",ios::app);
  int pos;
  pos=fout.tellp();
  cout<<pos;
  fout<<"mysirg";
  pos=fout.tellp();
  cout<<pos;
  fout.close();

}
