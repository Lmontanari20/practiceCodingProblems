#include <unordered_map>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size() == 0 || nums.size() == 1) {
            return false;
        }
        unordered_map<int, int> numbers = {};
        for(int i = 0; i < nums.size(); i++) {
            if(numbers[nums[i]] == 1) {
                return true;
            }else {
                numbers[nums[i]] = 1;
            }
        }
        return false;
    }
};