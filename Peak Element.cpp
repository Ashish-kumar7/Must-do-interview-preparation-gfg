class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2 ;
            if(mid>0 && mid<nums.size()-1){
                if(nums[mid]>nums[mid+1]  && nums[mid]>nums[mid-1]){
                    return mid;
                }
                else if(nums[mid]<nums[mid-1]){
                    high=mid-1;
                }
                else if(nums[mid] < nums[mid+1]){
                    low=mid+1;
                }         
            }
            else if(mid==0 ){
                if(nums[mid]<nums[1]){
                    return 1;
                }
                return mid;
            }
             else if(mid==nums.size()-1 ){
                if(nums[mid]>nums[mid-1]){
                    return mid;
                }
                return mid-1;
            }
            
        }
        return 0;
        
    }
};