class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i1 = 0;
        int i2 = 0;
        string res = "";
        while(i1 < word1.size() || i2 < word2.size()) {
            if(i1 < word1.size() && i2 < word2.size()) {
                res += word1[i1];
                res += word2[i2];
                i1++;
                i2++;
            }else if(i1 >= word1.size()) {
                res += word2[i2];
                i2++;
            }else if(i2 >= word2.size()) {
                res += word1[i1];
                i1++;
            }
        }
        if(i1 < word1.size()) {
            for(int i = i1; i < word1.size(); i++) {
                res += word1[i];
            }
        }else if(i2 < word2.size()) {
            for(int i = i2; i < word1.size(); i++) {
                res += word2[i];
            }
        }
        return res;
    }
};