#include<iostream>
using namespace std;

class Student
{
private:
    int p,q;
public:

    void set_data(int x,int y)
    {
        p=x;q=y;
    }
    int getP()
    {
        return (p);
    }
    int getQ()
    {
        return (q);
    }

};


class Person
{
private:
    int a,b;

public:
    Person(){}
    Person(Student s)
    {
        a=s.getP();
        b=s.getQ();
    }

    void show_data()
    {
        cout<<" a is "<<a<<" and  b is "<<b<<endl;
    }

};



int main()
{
    Student s;
    Person p;
    s.set_data(3,4);
    p=s;
    p.show_data();
}

