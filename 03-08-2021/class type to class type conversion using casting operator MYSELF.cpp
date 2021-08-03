#include<iostream>
using namespace std;
class Student
{
private:
    int c,d;
public:
    void set_data(int x,int y)
    {
        c=x;
        d=y;
    }
    void show_data()
    {
        cout<<" c is "<<c<<" and d is "<<d<<endl;
    }
};
class Person
{
private:
    int a,b;
public:
    operator Student()
    {
        Student temp;
        temp.set_data(a,b);
        return temp;
    }
    void set_data(int x, int y)
    {
        a=x;
        b=y;
    }

};



int main()
{
    Person p ;
    p.set_data(3,4);
    Student s;
    s=p;
    s.show_data();
}
