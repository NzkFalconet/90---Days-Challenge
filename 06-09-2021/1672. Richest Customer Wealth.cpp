class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

    vector<int>v1;
    int sum;
    for(int i=0;i<accounts.size();++i)
    {
        for(int j=0;j<accounts[i].size();++j)
        {
            sum=accumulate(accounts[i].begin(),accounts[i].end(),0);

        }

        v1.push_back(sum);
    }

       return *max_element(v1.begin(),v1.end());


    }
};
