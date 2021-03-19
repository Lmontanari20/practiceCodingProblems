class Solution {
public:
    bool canConvertString(string s, string t, int k) {
        if(s.length() != t.length()) {
            return false;
        }
                
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == t[i]) {
                continue;
            }
            if(s[i] != t[i]) {
                for(int y = 0; y < k; y++) {
                    if(s[i] == 'z') {
                        s[i] = 'a';
                    }else {
                        s[i]++;
                    }
                    if (s[i] == t[i]) {
                        break;
                    }
                }
            }
        }
        
       if(s == t) { return true; } else { return false; }
    }
};