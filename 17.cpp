class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>result;
        if(digits.length()==0){
            return result;
        }
        string map[]={"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,map,"",0,result);
        return result;
    }
    void solve(string digits,string map[],string ans,int index,vector<string>&result){
        if(index==digits.length()){
            result.push_back(ans);
            return;
        }
        else {
            string letter=map[digits[index]-'0'];
            for(int i=0;i<letter.length();i++){
                solve(digits,map,ans+letter[i],index+1,result);
            }
        }
    }
};