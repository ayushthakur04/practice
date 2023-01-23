 void levelOrder(Node * root) {
     vector<int>v;
     queue<Node*>q;
     if(root){
     q.push(root);}
     
     while(!q.empty())
     {
         Node* temp=q.front();
         q.pop();
         cout<<temp->data<<" ";
         if(temp->left)
         q.push(temp->left);
         if(temp->right)
         q.push(temp->right);
     }
 
    }
