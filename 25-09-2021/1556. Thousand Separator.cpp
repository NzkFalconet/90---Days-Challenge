class Solution {
public:
    string thousandSeparator(int n) {

    string s= to_string(n);
           if(s.size()<=3)
    {
        return s;

    }
    string str;
    reverse(s.begin(),s.end());

    int loc=s.size();
    int i=0;
    while(i<loc)
    {

        if(i==0)
        {
            str.push_back(s[i]);
            i++;

        }
        else if(i%3!=0)
        {
            str.push_back(s[i]);
            i++;
        }
        else if(i%3==0)
        {
              str.push_back('.');
                str.push_back(s[i]);
                i++;
        }
    }
    reverse(str.begin(),str.end());
   return str;
    }
};
