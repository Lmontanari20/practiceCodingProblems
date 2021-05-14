class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        vector<string> keys; 
        vector<string> values;
        // go through s and when you hit a bracket add chars to temp string until hitting an end bracket 
        // when you hit the end bracket add temp string to keys
        // set temp string to ""
        // go through keys and add value to values array
        // have index counter for values while going through s 
        // if hit bracket add value and dont add chars from s until end     bracket
        string temp = "";
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '('){
                while(true) {
                    if(s[i+1] == ')') {
                        keys.emplace_back(temp);
                        temp = "";
                        break;
                    }
                    temp += s[i+1];
                    i++;
                }
            }
        }
        int ind = 0;
        for(int i = 0; i < knowledge.size(); i++) {
            if(knowledge[i][0] == keys[ind]) {
                values.emplace_back(knowledge[i][1]);
                ind++;
            }
        }
        
        string result = "";
        
        bool add = true;
        int index = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                add = false;
                result += values[index];
                index++;
                continue;
            }else if(s[i] == ')') {
                add = true;
                continue;
            }
            if(add) {
                result += s[i];
            }
        }
        return result;
        
    }
};