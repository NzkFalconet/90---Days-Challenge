
#include<iostream>
using namespace std;


int main(){



    int n;
    cout<<"enter count of elements in array"<<endl;
    cin>>n;
    cout<<"enter array's element"<<endl;
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    int arr[n];
    for(int i=0;i<n;i++)
    {

        cin>>arr[i];
        if(arr[i]==0)
        {
            count0++;
        }
        else if(arr[i]==1)
        {
            count1++;
        }
        else if(arr[i]==2)
        {
            count2++;
        }
    }



cout<<count0<<" "<<count1<<" "<<count2<<endl;


  for(int i=0;i<n;i++)
  {
      if(i<count0)
      {
               arr[i]=0;
      }
      else if(i>=count0 && i<count0+count1){

          arr[i]=1;
      }
       else if(i>=count0+count1 && i<count0+count1+count2){

           arr[i]=2;

      }
  }







   cout<<"array is"<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<endl;
   }


}
