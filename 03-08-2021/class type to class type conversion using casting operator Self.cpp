#include<iostream>
using namespace std;

class Student
{
private:
    int p,q;
public:
     void set_data(int x,int y)
    {
       p=x;
       q=y;
    }
    void show_data()
    {
        cout<<"p is "<<p<<" and q is "<<q<<endl;
    }

};

class Person
{
private:
    int a,b;
public:

    void set_data(int x, int y)
    {
        a=x;b=y;
    }
     operator Student()
    {
        Student temp;
        temp.set_data(a,b);
        return temp;
    }

};




int main()
{
    Person p;
    p.set_data(3,4);
    Student s;
    s=p;
    s.show_data();
}
