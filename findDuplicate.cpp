class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> numSet;
        for(int i = 0; i < nums.size(); i++) {
            if(numSet.find(nums[i]) != numSet.end()) {
                return nums[i];
            }
            numSet.emplace(nums[i]);
        }
        return 0;
    }
};