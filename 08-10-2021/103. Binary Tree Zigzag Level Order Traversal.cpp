
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
   vector<vector<int>>v;
        if(!root)return v;
        queue<TreeNode*>q;
        q.push(root);
        bool flag= true;
        while(!q.empty())
        {
            vector<int>vec;
            int n=q.size();
            for(int i=0;i<n;++i)
            {
                TreeNode* temp=q.front();
                q.pop();
                vec.push_back(temp->val);
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            if(flag==false)
            {
                reverse(vec.begin(),vec.end());

                 v.push_back(vec);

            }
            else
            {
                 v.push_back(vec);
            }
            flag=!flag;

        }
        return v;
    }
};
