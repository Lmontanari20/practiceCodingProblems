#include <unordered_set>

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        unordered_set<int> greed;
        int count = 0;
        int i = 0;
        int j = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        while(i < s.size() && j < g.size()) {
            if(s[i] >= g[j]) {
                count++;
                i++;
                j++;
            }else {
                i++;
            }
        }
        
        return count;
    }
};