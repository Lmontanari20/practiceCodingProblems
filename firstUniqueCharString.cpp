class Solution {
public:
    int firstUniqChar(string s) {
        // make map of chars and count 
        // go through string and see if char count = 1 if so return index
        // return -1
        
        unordered_map<char, int> counts;
        
        for(char c : s) {
            counts[c]++;
        }
        
        for(int i = 0; i < s.size(); i++) {
            if(counts[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};