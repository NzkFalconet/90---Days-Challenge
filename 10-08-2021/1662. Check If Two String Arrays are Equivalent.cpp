#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<string>word1={"ab","c"};
        vector<string>word2={"a","cb"};
    string a="";
    string b="";
    for(auto ele:word1)
        a=a+ele;
    for(auto ble:word2)
        b=b+ble;
    if(a==b){       cout<<"Equal";
}
else{
           cout<<"Not Equal";

}

}
