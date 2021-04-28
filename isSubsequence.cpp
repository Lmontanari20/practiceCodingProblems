class Solution {
public:
    bool isSubsequence(string s, string t) {
        // have an index for s and t
        // if curr indices equal eachother increment both indices
        // else increment t index
        // if sindex == size
        //      return true
        // all else return false
        if(s == t) {
            return true;
        }
        int sIndex = 0;
        int tIndex = 0;
        
        while(tIndex < t.size()) {
            if(s[sIndex] == t[tIndex]) {
                sIndex++;
                tIndex++;
            }else {
                tIndex++;
            }
            if(sIndex == s.size()) {
                return true;
            }
        }
        return false;
    }
};