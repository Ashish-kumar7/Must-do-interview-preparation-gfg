
int height(Node* root){
   // Your code here
   if(root==NULL){
       return 0;
   }
   int lh=height(root->left);
   int rh=height(root->right);
   return max(lh,rh) +1 ;
}