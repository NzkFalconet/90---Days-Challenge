#include<iostream>
using namespace std;

void maxOf( int n, int a[]){
    int index;
    cout<<"enter array's ith index: "<<endl;
    cin>>index;
    int max;
    max=a[0];
    for(int j=1;j<index;j++)
    {
        if(max<a[j])
        {
            max=a[j];
        }
    }
    cout<<"the max in "<<index<<" th index is "<<max;

}




int main(){
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cout<<"enter array's size: "<<endl;
        cin>>n;
           int a[n];
           cout<<"enter array element: ";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        maxOf(n,a);


        t--;
    }

}
