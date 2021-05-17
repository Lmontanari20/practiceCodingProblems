class Solution {
public:
    int addDigits(int num) {
        // mathmatical digital root 
        // if num is 0 return 0
        // if num mod 9 is 0 then sum will be 0
        // otherwise sum will be num mod 9 
        
        if(num == 0) {
            return 0;
        }
        if(num % 9 == 0) {
            return 9;
        }
        return num % 9;
    }
};