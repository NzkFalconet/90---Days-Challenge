#include<iostream>
using namespace std;
class Integer
{
private:
    int a;
public:
    void set_data(int x)
    {
        a=x;
    }

    void show_data()
    {
        cout<<"a is "<<a<<endl;
    }

    Integer operator++()
    {
        Integer temp;
        temp.a=++a;
        return temp;
    }
    Integer operator++(int)
    {
        Integer temp;
        temp.a= a++;
        return temp;
    }
};

int main()
{
    Integer c1,c2;
    c1.set_data(3);
    c2=c1++;
    c1.show_data();
    c2.show_data();
}
