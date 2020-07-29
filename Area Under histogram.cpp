class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int max_area=0;
        int area=0;
        int n=heights.size();
        stack<int>S;
        int i;
        for( i=0;i<n;){
            if(S.empty() || heights[S.top()]<=heights[i]){
                 S.push(i);
                 i++;
             }  
            else {
                 int val=heights[S.top()];
                    S.pop();
                    if(S.empty()){
                        area=val*(i);
                    }
                    else{
                        area=val*(i-S.top()-1);
                    }
                    if(max_area<area){
                        max_area=area;
                    }
                }
        }
        while(!S.empty()){
                    int val=heights[S.top()];
                    S.pop();
                    if(S.empty()){
                        area=val*(i);
                    }
                    else{
                        area=val*(i-S.top()-1);
                    }
                    if(max_area<area){
                        max_area=area;
                    }
                }
        return max_area;
    }
};