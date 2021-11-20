vector<int> reverseLevelOrder(Node *root)
{
     vector<int>loc;
     vector<vector<int>>v;
        queue<Node*>q;
        if(!root)
        {
            return loc;
        }
        q.push(root);
        while(!q.empty())
        {
            vector<int>vec;
            int n=q.size();
            for(int i=0;i<n;++i)
            {

                   Node* temp=q.front();
                     q.pop();
                     vec.push_back(temp->data);
                     if(temp->left)
                     {
                          q.push(temp->left);
                      }
                     if(temp->right)
                      {
                         q.push(temp->right);
                      }
             }
             v.push_back(vec);


        }
        reverse(v.begin(),v.end());

        for(auto it:v)
        {
            for(auto it2:it)
            {
                loc.push_back(it2);
            }
        }
        return loc;

}
