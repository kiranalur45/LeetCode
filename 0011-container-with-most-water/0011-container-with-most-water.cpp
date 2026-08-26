class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = 0;
        int n = height.size() ;
        int i=0 ;
        int j = n - 1;
        while(i < j){
                int w = j-i;
                int ht = min(height[i], height[j]);
                int curwater = w * ht ;
                maxwater = max(maxwater , curwater);
                (height[i] < height[j]) ? i++ : j--;       
        }
        return maxwater ;       
    }
};