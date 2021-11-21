//iterative approach

        stack<TreeNode*>st;
        vector<int>v;
        if(!root)
        {
            return v;
        }
        st.push(root);
        while(!st.empty())
        {
            int n=st.size();
            for(int i=0;i<n;++i)
            {
                TreeNode* temp = st.top();
                st.pop();
                v.push_back(temp->val);
                if(temp->right)
                {
                    st.push(temp->right);
                }
                if(temp->left)
                {
                    st.push(temp->left);
                }
            }
        }
        return v;


//Recursive Approach-------------------


     void Traverse(TreeNode* root, vector<int>&ans)
    {
        if(!root)return;
        ans.push_back(root->val);
        Traverse(root->left,ans);
        Traverse(root->right,ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
         vector<int>ans;
        Traverse(root,ans);
        return ans;
    }
