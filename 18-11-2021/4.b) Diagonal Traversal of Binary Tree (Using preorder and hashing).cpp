

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

void Preorder(Node* root,map<int,vector<int>>&m , int d)
{
    if(!root)return;
    m[d].push_back(root->data);
    if(root->left)
    {
        Preorder(root->left,m,d+1);
    }
    if(root->right)
    {
        Preorder(root->right,m,d);
    }
}


vector<int> diagonal(Node *root)
{
        vector<int>v;
        map<int,vector<int>>m;
       int d=0;
       Preorder(root,m,d);
       for(auto it:m)
       {
           for(auto it1:it.second)
           {
               v.push_back(it1) ;
           }

       }

        return v;
}
