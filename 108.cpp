class Solution {
public:
    TreeNode * solve(vector<int>nums,int i,int j){
        if(i>j){
        return NULL;
    }
        int mid=(i+j)/2;
        int data=nums[mid];
        TreeNode * root=new TreeNode(data);
        root->left=solve(nums,i,mid-1);
        root->right=solve(nums,mid+1,j);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return solve(nums,0,nums.size()-1);
    }
};