class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        // have a for loop that starts at left bound and ends at right bound
        
        // at every number make a temp copy 
        // while the temp copy is >= 1
        //     temp % 10 = digit 
        //     number % digit has to equal 0 to be put in ans
        //     temp = temp / 10 
        // return ans
        
        vector<int> ans;
        
        for(int i = left; i <= right; i++) {
            int temp = i;
            bool add = false;
            while(temp >= 1) {
                int digit = temp % 10;
                if(digit == 0) {
                    add = false;
                    break;
                }
                if(i % digit == 0) {
                    add = true;
                }else {
                    add = false; 
                    break;
                }
                temp = temp/10;
            }
            if(add) {
                ans.emplace_back(i);
            }
        }
        return ans;
    }
};