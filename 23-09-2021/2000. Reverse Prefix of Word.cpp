class Solution {
public:
    string reversePrefix(string str, char ch) {
        auto it = str.find(ch);
   if(it>str.size()-1)
   {
       return  str;
   }
   reverse(str.begin(),str.begin()+it+1);
  return str;
    }
};
