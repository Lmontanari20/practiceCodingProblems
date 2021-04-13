class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        if(k == 0) {
            for(int i = 0; i < code.size(); i++) {
                code[i] = 0;
            }
            return code;
        }
        
        vector<int> result;
        if(k > 0){
            for(int i = 0; i < code.size(); i++) {
                int resultValue = 0;
                for(int j = 1; j <= k; j++) {
                    int index = i+j;
                    if(index > code.size() - 1) {
                        index = index - code.size();
                    }
                    resultValue += code[index];
                }         
                result.emplace_back(resultValue);
            }
        } else if(k < 0) {
            for(int i = 0; i < code.size(); i++) {
                int resultValue = 0;
                for(int j = 1; j <= -k; j++) {
                    int index = i-j;
                    if(index < 0) {
                        index = index + code.size();
                    }
                    resultValue += code[index];
                }         
                result.emplace_back(resultValue);
            }
        }
        return result;
        
    }
};