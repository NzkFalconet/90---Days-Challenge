
void Traverse(Node* node , vector<int>&v)
{
    if(!node)return ;
    v.push_back(node->data);
    if(node->left)
    {
        Traverse(node->left,v);
    }
     if(node->right)
    {
        Traverse(node->right,v);
    }
}

int getSize(Node* node)
{
   vector<int>v;
   Traverse(node,v);
   return v.size();

}
