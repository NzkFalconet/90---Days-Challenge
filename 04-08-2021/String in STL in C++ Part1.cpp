#include<iostream>
#include<string>
using namespace std;
int main()
{
    char s1[10]="Hello";
     s1="world";//wrong
     strcpy(s1,"world");//right
    char s2[20];
    s2=s1;//wrong
    strcpy(s2,s1); //right
    s2>s1;//wrong
    int i=strcmp(s2,s1)//right;
    char s3[30];
    s3=s1+s2; //wrong
    strcpy(s3,strcat(s1,s2));


}
