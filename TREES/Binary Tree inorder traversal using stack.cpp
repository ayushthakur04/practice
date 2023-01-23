class Solution 
{
public:




    vector<int> inorderTraversal(TreeNode* root) 
 {
    vector<int>a;
    stack<TreeNode*>s;
    if(root)
    s.push(root);
    while(!s.empty())
    {
      TreeNode* temp=s.top();
      if(temp->left)
      {
          s.push(temp->left);
          temp->left=NULL;
      }
      else
      {
          a.push_back(temp->val);
          s.pop();
          if(temp->right)
          s.push(temp->right);
      }

    }
    return a;
 }
        
};
