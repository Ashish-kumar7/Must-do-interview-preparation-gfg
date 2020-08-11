class Solution {
public:
    int binarysearch1(vector<int>& nums, int target){
        int start=0;
        int end=nums.size()-1;
        int valtemp1=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target){
                valtemp1=mid;
                end=mid-1;
            }
            else  if(nums[mid]<target){
                start=mid+1;
            }
            else  if(nums[mid]>target){
                end=mid-1;
            }
        }
        return valtemp1;
    }
      int binarysearch2(vector<int>& nums, int target){
        int start=0;
        int end=nums.size()-1;
          int valtemp1=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target){
                valtemp1=mid;
                start=mid+1;
            }
            else  if(nums[mid]<target){
                start=mid+1;
            }
            else  if(nums[mid]>target){
                end=mid-1;
            }
        }
        return valtemp1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int  n=nums.size();
         vector<int>final1;
        if(n==0){
             final1.push_back(-1);
             final1.push_back(-1);
            return final1;return final1;
        }
        int start=binarysearch1(nums,target);
        int end=binarysearch2(nums,target);
        if(start==-1 || end==-1){
            final1.push_back(-1);
             final1.push_back(-1);
            return final1;
        }
        final1.push_back(start);
        final1.push_back(end);
        return final1; 
    }
};