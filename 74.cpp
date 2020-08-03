class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int n=matrix.size();
        cout<<n<<" ";
        if(matrix.size() == 0) return false;
        int m=matrix[0].size();
        int j=m-1;
        while(i>=0 && i<n && j>=0 && j<m){
            if(matrix[i][j]==target){
                return 1;
            }
            else if(matrix[i][j]>target){
                j--;
            }
            else if(matrix[i][j]<target){
                i++;
            }     
        }
        return  0;        
        
    }
};