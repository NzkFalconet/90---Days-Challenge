class Solution {
public:
    string makeFancyString(string s)
    { string res="";
      int n=s.length();


     if(n<3)
         return s;
     for(int i=0;i<s.length()-2;i++)
        {
            if(s[i] == s[i + 1] && s[i + 1] != s[i + 2])
                    res += s[i];

            else if(s[i] != s[i + 1] && s[i + 1] != s[i + 2])
                    res += s[i];

            else if(s[i] != s[i + 1] && s[i + 1] == s[i + 2])
                res += s[i];

        }
        res.push_back(s[n-2]);
        res.push_back(s[n-1]);
        return res;
    }
};
