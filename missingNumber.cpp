class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size() == 0) {
            return 1;
        }
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != i) {
                return i;
            }
        }
        return nums.size();
    }
};