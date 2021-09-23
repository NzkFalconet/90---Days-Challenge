class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {

    string str;
    vector<string>vec;
    for(int i=0;i<text.size();++i)
    {
        if(text[i]!=' ')
        {
            str.push_back(text[i]);
        }
        if(text[i]==' ' || i==text.size()-1)
        {
            vec.push_back(str);
            str.clear();
        }

    }
    vector<string>third;
    for(int i=0;i<vec.size()-2;++i)
    {
        if(vec[i]==first && vec[i+1]==second)
        {
            third.push_back(vec[i+2]);
        }
    }
        return third;
    }
};
