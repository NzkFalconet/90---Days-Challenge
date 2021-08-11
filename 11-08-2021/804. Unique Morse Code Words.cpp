#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>v={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    for(auto val:v)
    {
        cout<<val;
    }
    cout<<endl;
    cout<<(int) 'a'<<endl;
    vector<vector<string>>v1;
    vector<string>temp;
    temp.push_back("gin22");
    temp.push_back("gin22222");
    temp.push_back("gin2");
    temp.push_back("gin1");
    v1.push_back(temp);
    for(int i=0;i<v1.size();++i)
    {
        for(int j=0;j<v1[i].size();++j)
        {
            cout<<v1[i][j];

        }

        cout<<endl;
    }


}
