class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sorted_heights=heights;
        int n= heights.size();
        sort(sorted_heights.begin(), sorted_heights.end());
        int counts =0;
        for (int i=0 ;i<n;i++ ){
            if (sorted_heights[i] != heights[i]){
                counts++;      
            }
        }
        return counts;
        
    }
};