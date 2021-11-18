#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N=6;
   int arr[] = {3, 6, 12, 1, 5, 8};
         queue<int>q;
        for(int i=0;i<N;++i)
        {
            q.push(arr[i]);
        }
        int i=0;
        while(i<N)
        {
            if(i%2!=0 && q.front()%2!=0) //odd and number is odd
            {
                arr[i]=q.front();
                q.pop();
                i++;
            }
            else if(i%2==0 && q.front()%2==0) //even and number is even
            {
                arr[i]=q.front();
                q.pop();
                i++;
            }
            else if(i%2==0 && q.front()%2!=0) //even and number is od
            {

                int temp=q.front();
                q.pop();
                q.push(temp);
                i=i;

            }
              else if(i%2!=0 && q.front()%2==0) //even and number is even
            {
                int temp=q.front();
                q.pop();
                q.push(temp);
                i=i;

            }


        }


    for(int i=0;i<N;++i)
    {

        cout<<arr[i]<<" ";
    }
}
