class Solution {
public:
    bool check(vector<int>& nums) {
        // find minimum index value
        // go through right side and make sure next > curr
        // go through left side and make sure next < curr
        
//         int min = 1000000;
//         int index = -1;
//         for(int i = 0; i < nums.size(); i++) {
//             if (nums[i] < min) {
//                 index = i;
//                 min = nums[i];
//             }
//         }
        
//         for(int i = index; i < nums.size() - 1; i++) {
//             if(i == index) {
//                 min = nums[i + 1];
//             }
//             if(nums[i] > nums[i+1]) {
//                 return false;
//             }
//         }
        
//         for(int i = index - 1; i > 0; i--) {
//             if(nums[i] < nums[i-1] || nums[i] < min) {
//                 return false;
//             }
//         }

// solution below 
        
        int c = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > nums[(i+1)%nums.size()]) {
                c++;
            }
            if(c > 1) {
                return false;
            }

        }
        return true;
        
    }
};