class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int temp;
        if(ruleKey=="type")
             temp=0;
        if(ruleKey=="color")
             temp=1;
        if(ruleKey=="name")
             temp=2;

        int count=0;
        for (int i = 0; i < items.size(); i++) {
           if( items[i][temp]==ruleValue)
           {count++;}

    }
        return count;
    }
};
