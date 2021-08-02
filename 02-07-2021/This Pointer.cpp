#include<iostream>
using namespace std;
class Box
{
private:
    int l,b,h;
public:
    void set_dim(int l,int b, int h)
    {
       this->l=l;
        this->b=b;
        this->h=h;
    }

    void show_dim()
    {
        cout<<"l= "<<l<<" b= "<<b<<" h= "<<h<<endl;
    }
};

int main()
{
 //   Box smallBox,*p;
   // p= &smallBox;
   // p->set_dim(5,7,9);
   // p-> show_dim();
   Box smallBox;
   smallBox.set_dim(5,6,7);
   smallBox.show_dim();
}
