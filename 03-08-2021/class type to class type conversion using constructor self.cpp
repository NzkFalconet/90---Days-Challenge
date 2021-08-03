#include<iostream>
using namespace std;
class Person
{
private:
    int a,b;
public:



    void set_data(int x, int y)
    {
        a=x;b=y;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }

};
class Student
{
private:
    int q,r;
public:

    Student(){}
    Student (Person p)
    {
        q=p.getA();
        r=p.getB();
    }
    void show_data()
    {
        cout<<"q is "<<q<<" and r is "<<r<<endl;
    }
};

int main()
{
    Person p;
    p.set_data(5,6);
    Student s;
    s=p;
    s.show_data();

}
