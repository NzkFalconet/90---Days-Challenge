#include<iostream>
#include<string.h>
using namespace std;
class Student
{
private:
    char student_name[20];
    char roll_num[20];

    class Address
    {
    private:

        int house_num;
        char street[20];
        char city[20];
        char state[20];
    public:
        void set_address(int h, char *str, char *c, char *s)
        {

            (house_num=h);
            strcpy(street,str);
            strcpy(city,c);
            strcpy(state,s);

        }
        void show_address()
        {
            cout<<house_num<<endl;
            cout<<street<<endl;
            cout<<city<<endl;
            cout<<state<<endl;
        }

    };
    Address add;

    public:
        void set_studentName(char *name)
        {

            strcpy(student_name,name);
        }
           void set_rollNum(char *r)
        {

            strcpy(roll_num,r);
        }
         void set_address(int h, char *str, char *c, char *s)
        {
            add.set_address(h,str,c,s);
        }
        void show_data()
        {
            cout<<"student data"<<endl;
            cout<<student_name<<endl;
            cout<<roll_num<<endl;
            add.show_address();

        }
};

int main()
{
    Student s1;
    s1.set_studentName("shaan");
    s1.set_rollNum("18103046");
    s1.set_address(101,"idegah road","spn","UP");
    s1.show_data();
}
