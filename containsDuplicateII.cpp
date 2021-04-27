#include <cmath>
#include <unordered_map>

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // return true 
        //   nums[i] == nums[j] && abs(i-j) <= k
        
        // for(int i = 0; i < nums.size() - 1; i++) {
        //     for(int j = i+1; j < nums.size(); j++) {
        //         if(nums[i] == nums[j] && abs(i - j) <= k) {
        //             return true;
        //         }
        //     }
        // }
        
        unordered_map<int,int> duplicates;
        for(int i = 0; i < nums.size(); i++) {
            if(duplicates.find(nums[i]) == duplicates.end()) {
                duplicates[nums[i]] = i;
            }else {
                // duplicates[nums[i]] = duplicates[nums[i]] - i;
                if(abs (duplicates[nums[i]] - i) <= k) {
                    return true;
                }
                duplicates[nums[i]] = i;
            }
        }
        return false;
    }
};