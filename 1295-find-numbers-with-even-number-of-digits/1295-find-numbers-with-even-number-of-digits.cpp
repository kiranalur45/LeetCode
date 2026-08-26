class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ld =0;
        int count =0;
        for (int i =0; i< nums.size() ; i++){
            int n = nums[i];
            int ld = 0;
            while (n > 0 ){
                n/=10;
                ld++;
                }
            if ( ld % 2 == 0){
                count++;
            }
        }
        return count ;
        
    }
};