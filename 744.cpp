class Solution {
public:
    char nextGreatestLetter(vector<char>& letter, char target) {
        int start=0;
        int end=letter.size()-1;
        
        char res=letter[0];
        while(start<=end){
            int mid=(start+end)/2;
            if(letter[mid]==target){
                start=mid+1;
            }
            else if(letter[mid]>target){
                end=mid-1;
                res=letter[mid];
            }
            else if(letter[mid]<target){
                start=mid+1;
            }
        }
        return res;
        
    }
};