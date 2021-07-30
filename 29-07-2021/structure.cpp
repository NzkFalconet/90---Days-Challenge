#include<iostream>
#include<conio.h>
using namespace std;

struct book
{
    int bookId;
    float price;
    char title[20];
};

book input();
void display(book);


int main()
{
    book b1;
    b1= input();
  display(b1);

}


book input()
{
    book b;
    cout<<"enter bookId, price and title of the book "<<endl;
    cin>>b.bookId>>b.price>>b.title;
    return b;
}

void display(book b)
{
    cout<<b.bookId<<" "<<b.price<<" "<<b.title;
}





