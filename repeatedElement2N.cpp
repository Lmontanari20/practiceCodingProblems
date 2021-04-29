class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int n = A.size()/2;
        unordered_map<int,int> repeats;
        
        for(int i : A) {
            repeats[i]++;
            if(repeats[i] == n) {
                return i;
            }
        }
        
        // for(auto c : repeats) {
        //     if(c.second == n) {
        //         return c.first;
        //     }
        // }
        return 0;
    }
};