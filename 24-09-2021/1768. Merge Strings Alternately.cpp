class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int n1=w1.size();
        int n2=w2.size();
        string s;
        int i=0;
        int j=0;
        while(i<n1 && j<n2)
        {
                s.push_back(w1[i]);
                 s.push_back(w2[j]);
            i++;
            j++;
        }
        while(i<n1)
        {
            s.push_back(w1[i]);
            i++;
        }
         while(j<n2)
        {
            s.push_back(w2[j]);
            j++;
        }
        return s;
    }
};
