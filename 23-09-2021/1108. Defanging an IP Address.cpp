class Solution {
public:
    string defangIPaddr(string s) {

            string str;
        for(int i=0;i<s.size();++i)
        {
            if(s[i]=='.')
            {
                str.push_back('[');
                str.push_back('.');
                str.push_back(']');
            }
            else
            {
                str.push_back(s[i]);
            }
        }
        return str;
    }
};
