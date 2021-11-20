class Solution{
  public:
    vector <int> verticalSum(Node *root) {
        vector<int>v;
         vector<int>loc;
        map<int,vector<int>>m;
        queue<pair<Node*,int>>q;
        if(!root)
        {
            return loc;
        }
        q.push({root,0});
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;++i)
            {
                Node* temp = q.front().first;
                int col= q.front().second;
                q.pop();
                m[col].push_back(temp->data);

                if(temp->left)
                {
                    q.push({temp->left,col-1});
                }
                if(temp->right)
                {
                    q.push({temp->right,col+1});
                }

            }
        }

        for(auto it1:m)
        {
            int sum=0;
            for(auto it2:it1.second)
            {

                   sum=sum+it2;

            }
            loc.push_back(sum);
        }
        return loc;

    }
};
