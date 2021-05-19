class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> scores;
        // based on current index of ops, manipulate scores 
        for(int i = 0; i < ops.size(); i++) {
            if(ops[i] == "+") {
                int temp = scores[scores.size() - 1] + scores[scores.size() - 2];
                scores.emplace_back(temp);
            }else if(ops[i] == "D") {
                int temp = scores[scores.size() - 1] * 2;
                scores.emplace_back(temp);
            }else if(ops[i] == "C") {
                scores.pop_back();
            }else {
                int temp = stoi(ops[i]);
                scores.emplace_back(temp);
            }
        }
        // go through scores and find the overall sum to return
        int score = 0;
        for(int i = 0;i < scores.size(); i++) {
            score += scores[i];
        }
        return score;
    }
};