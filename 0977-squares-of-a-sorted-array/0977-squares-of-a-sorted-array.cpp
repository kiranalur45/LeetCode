class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sortedsquare ;
        for(int i=0; i<nums.size(); i++){
            sortedsquare.push_back( nums[i] * nums[i]);
        }
        sort(sortedsquare.begin() , sortedsquare.end());
        return sortedsquare;
        
    }
};