class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<int> result; 
        vector<string> output; 
        int curr = 0;
        // go through n 
        // push n to result 
        // if result at current != target at current, pop 
        // if current index = target size then return output
        
        for(int i = 1; i <= n; i++) {
            if(curr == target.size()) {
                return output;
            }
            result.emplace_back(i);
            output.emplace_back("Push");
            if(target[curr] != result[curr]) {
                output.emplace_back("Pop");
                result.pop_back();
                curr--;
            }
            curr++;
        }
        return output;
    }
};