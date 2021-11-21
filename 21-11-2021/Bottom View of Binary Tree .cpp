class Solution {
  public:
    vector <int> bottomView(Node *root) {
        map<int,vector<int>>m;
        vector<int>v;
        queue<pair<Node*,int>>q;
        q.push({root,0});

      while(!q.empty())
       {
             int n=q.size();
        for(int i=0;i<n;++i)
          {
            Node* temp= q.front().first;
            int hd=q.front().second;
            int loc= temp->data;
            q.pop();
            m[hd].push_back(loc);
            if(temp->left)
            {
                q.push({temp->left,hd-1});
            }
            if(temp->right)
            {
                q.push({temp->right,hd+1});
            }
        }
      }

        for(auto it1:m)
        {

               auto n=it1.second.size()-1;
            v.push_back(it1.second[n]);
        }

        return v;
    }
};
