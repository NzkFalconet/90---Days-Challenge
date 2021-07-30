#include<iostream>
#include<conio.h>
using namespace std;



struct book{
    char sName[20];
    int sRoll;
    double sFees;

};


book input();
void display(book);



book input(){
    book b;
    cout<<"enter student name , student fees , student roll number "<<endl;
    cin>>b.sName>>b.sFees>>b.sRoll;
    return b;
}


void display(book b)
{
    cout<<b.sRoll<<" "<<b.sFees<<" "<<b.sName<<" "<<endl;
}



int main(){

    book b1;
    b1= input();
    display(b1);
}
