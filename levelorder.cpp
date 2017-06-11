void levelorder(node* root)
      {
        if(root==0)
      {return 0;}
       queue<node*> Q;
Q.push(root);
   {
   while(Q.empty())
       {  
            node *now=Q.front();
             cout<<now->data<<" ";
           if(now->left!=0)
               {Q.push(now->left);}
      if(now->right!=0)
               {Q.push(now->right);}
       Q.pop(); }

   }
       
