class Solution {
public:
    string generateTheString(int n) {

   string s(n,'a');
    if (n%2==0)
    {
       s.pop_back();
    s.push_back('b');

    }

    return s;
    }
};
