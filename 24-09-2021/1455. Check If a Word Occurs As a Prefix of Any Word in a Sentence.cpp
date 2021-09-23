class Solution {
public:
    int isPrefixOfWord(string text, string s) {
        vector<string>sen;
        string str;
        for(int i=0;i<text.size();++i)
        {
            if(text[i]!=' ')
            {
                str.push_back(text[i]);
            }
            if(text[i]==' ' || i==text.size()-1)
            {
                sen.push_back(str);
                str.clear();
            }
        }
        for(int i=0;i<sen.size();++i)
        {
            if(sen[i].find(s)==0)
            {
                return i+1;
            }
        }
        return -1;
    }
};
