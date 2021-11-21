class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maxSum(root,maxi);
        return maxi;
    }

    int maxSum(TreeNode* root , int& maxi)
    {
        if(!root) return 0;
        int leftSum = max(0,maxSum(root->left,maxi));
        int rightSum = max(0,maxSum(root->right,maxi));
        maxi =max(maxi, root->val+leftSum+rightSum);
        return max(leftSum,rightSum)+root->val;



    }


};
