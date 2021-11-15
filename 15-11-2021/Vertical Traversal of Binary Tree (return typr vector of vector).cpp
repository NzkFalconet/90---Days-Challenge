
//created a map to contain col number and vector of elements which are in that specific column
    map<int,vector<int>>mymap;
    TreeNode* curr;

	//queue of pair to hold the address of root node and column
    queue<pair<TreeNode*,int>>q;
    q.push({root,0});
    while(!q.empty())
    {
        int n=q.size();

		//created a map to store the value of those nodes which are in same column
		// (used the multiset, incase of duplicate values
        map<int,multiset<int>>mapset;

        for(int i=0;i<n;++i)
        {
            curr=q.front().first;
            int col=q.front().second;
            q.pop();

			//Inserting the current root's the value on it's col(column)
            mapset[col].insert(curr->val);

            if(curr->left!=NULL)
             {
                 q.push({curr->left,col-1});
             }
            if(curr->right!=NULL)
             {
                 q.push({curr->right,col+1});
             }
        }

		//traversing through the whole map mapset to push the vector of different col and it's value
        for(auto it1:mapset)
        {
            for(auto it2:it1.second)
            mymap[it.first].push_back(it2);
        }
    }
    //pushing the vectors to vector of vector 'ans'
        for(auto it:mymap)
        {
             ans.push_back(it.second);
        }
     return ans;
