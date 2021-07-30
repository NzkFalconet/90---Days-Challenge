#include<iostream>
#include<conio.h>
using namespace std;

struct book
{
    private:
    int bookId;
    float price;
    char title[20];

    public:
    void input()
    {
        cout<<"enter book Id , price , title "<<endl;
        cin>>bookId>>price>>title;
    }

    void display()
    {
        cout<<"book Id is " <<bookId<<" ,price is "<<price<< " ,and title is "<<title<<endl;
    }

};


int main()
{
    book b1;
    b1.input();
    b1.display();
}
