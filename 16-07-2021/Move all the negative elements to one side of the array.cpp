#include<iostream>
using namespace std;

//void move_Element( int arr[n]){

//}


int main(){
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
        {
            count++;
        }
    }

    cout<<"negative elements are"<<count<<endl;
  //  move_Element(arr[n]);

}
