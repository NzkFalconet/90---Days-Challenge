#include<iostream>
using namespace std;

class student
{
private:
    string student_name;
    int student_age;
public:
    void set_details(string s, int age)
    {
        student_name=s;
        student_age=age;
    }

    void show_details()
    {
        cout<<"student name is "<<student_name<<" and student age is "<<student_age<<endl;

    }
};
int main()
{
    //----------declaration in pairs---------------
    pair<string, string>p1;
    pair<int, string>p2;
    pair<string,float>p3;
    pair<int,student>p4;

    //------------inserting values in pairs-------------
    p1= make_pair("shaan","tanishk");
    p2= make_pair(4,"student");
    p3=make_pair("master in c++",350.0f);
    student s1;
    s1.set_details("ananay",21);
    p4=make_pair(120,s1);

    //---------------accessing pair members---------------
    cout<<p1.first<<endl;
    cout<<p1.second<<endl;
    cout<<p2.first<<endl;
    cout<<p2.second<<endl;
    cout<<p3.first<<endl;
    cout<<p3.second<<endl;
    cout<<p4.first<<endl;
    student s2= p4.second;
    s2.show_details();
}
