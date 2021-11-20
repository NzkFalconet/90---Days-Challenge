	//Left View of a Binary Tree-------------------
		vector<int>ans;
        queue<Node*>q;
        q.push(root);
        if(!root)
        {
            return ans;
        }
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;++i)
            {
                Node* temp = q.front();
                q.pop();
                if(i==0)
                {
                     ans.push_back(temp->val);
                }

                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
			}
        }
        return ans;
