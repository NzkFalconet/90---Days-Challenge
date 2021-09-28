#include<bits/stdc++.h>
using namespace std;

void Print(vector<int>input,vector<int>output, int index)
{
    if(index>=input.size())
    {
        for(auto i:output)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        return ;
    }
     //Excluded Elements
    Print(input,output,index+1);

    //Included Elements
    output.push_back(input[index]);
    Print(input,output,index+1);



}






int main()
{
    vector<int>input{1,2,3};
    vector<int>output;
    int index=0;
    Print(input,output,index);
}
