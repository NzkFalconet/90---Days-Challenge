class Solution {
public:
    string truncateSentence(string s, int k) {
        int temp=0;
        for(auto i=0;i<s.size();++i)
        {
            if(s[i]==' ')
            {temp++;}
            if(temp==k)
            {
                s.erase(s.begin()+i,s.end());
            }
        }
        return s;
    }
};
