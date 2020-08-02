void solve(Node * root,Node* & prev,Node* & firstNode,Node* &last){
    if(root==NULL){
        return;
    }
    solve(root->left,prev,firstNode,last);
    if(prev!=NULL  && prev->data > root->data){
            if(firstNode==NULL){
                firstNode=prev;
            }
            last=root;
        }
    prev=root;
    solve(root->right,prev,firstNode,last);
}
struct Node *correctBST( struct Node* root ){
    if(root==NULL){
        return NULL;
    }
    Node * prev=NULL;
    Node * firstNode =NULL;
    Node * last=NULL;
   solve(root,prev,firstNode,last);
   int temp=firstNode->data;
   firstNode->data=last->data;
   last->data=temp;
   return root;
}