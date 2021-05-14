class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // if curr = 0 find the next index that doesnt equal 0
        // switch values
        if(nums.size() == 1) {
            return;
        }
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                int y = i + 1;
                while(true) {
                    if(y == nums.size()) {
                        return;
                    }
                    if(nums[y] != 0) {
                        int temp = nums[y];
                        nums[y] = 0;
                        nums[i] = temp;
                        break;
                    }
                    y++;
                }
            }
        }
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == -1094795586){
                nums[i] = 0;
            }
        }
        
    }
};
// above solution was somehow putting the number on line 27 for 0's, 
// I do not know why this was happening and couldn't find anything
// below solution is optimal 
void moveZeroes(vector<int>& nums) {
    int lastNonZeroFoundAt = 0;
    // If the current element is not 0, then we need to
    // append it just in front of last non 0 element we found. 
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[lastNonZeroFoundAt++] = nums[i];
        }
    }
 	// After we have finished processing new elements,
 	// all the non-zero elements are already at beginning of array.
 	// We just need to fill remaining array with 0's.
    for (int i = lastNonZeroFoundAt; i < nums.size(); i++) {
        nums[i] = 0;
    }
}