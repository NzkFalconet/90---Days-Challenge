class Solution {
public:
    int numOfStrings(vector<string>& patterns, string s) {
        int count=0;
        for(auto x:patterns)
        {
            if(s.find(x)<100)
            {
                count++;
            }
        }
        return count;
    }
};
