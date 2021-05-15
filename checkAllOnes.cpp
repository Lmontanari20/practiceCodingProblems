class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int count = k;
        for( auto n : nums) {
            if(n == 1) {
                if(count < k) {
                    return false;
                }
                count = 0;
            }else {
                count++;
            }
        }
        return true;
    }
};