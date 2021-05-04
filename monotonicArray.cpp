class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int curr = 0; 
        int next = 1;
        
        string increase = "";
        
        while(next != A.size()) {
            if(A[curr] == A[next]) {
                curr++;
                next++;
                continue;
            }
            if(increase == "") {
                if(A[curr] < A[next]) {
                    increase = "i";
                }else {
                    increase = "d";
                }
                curr++;
                next++;
                continue;
            }
            if(increase == "i"&& A[curr] > A[next]) {
                return false;
            }
            if(increase == "d" && A[curr] < A[next]) {
                return false;
            }
            curr++;
            next++;
        }
        return true;
    }
};