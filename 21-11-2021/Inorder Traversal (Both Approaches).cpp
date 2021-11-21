//iterative approach
vector<int>v;
        stack<TreeNode*>st;
        TreeNode* node=root;
        while(true)
        {
            if(node!=NULL){
                st.push(node);
                node=node->left;
            }
            else
            {
                if(st.empty()) break;
                node= st.top();
                st.pop();
                v.push_back(node->val);
                node=node->right;
            }
        }
        return v;

//Recursive Approach------------------------

      void Traverse(TreeNode* root, vector<int>&ans)
    {
        if(!root)return;
        Traverse(root->left,ans);
        ans.push_back(root->val);
        Traverse(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        Traverse(root,ans);
        return ans;
    }
