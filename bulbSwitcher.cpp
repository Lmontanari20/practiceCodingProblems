class Solution {
public:
    int bulbSwitch(int n) {
        // for simple solution, sqrt(n)
        if(n == 0) {
            return 0;
        }else if( n == 1 ) {
            return 1;
        }
        
        vector<bool> lights;
        for(int i = 0; i < n; i++) {
            lights.emplace_back(true);
        }

        for(int i = 2; i <= n; i++) {
            if( i == n) {
                lights[n - 1] = !lights[n-1];
                break;
            }
            for(int j = 0; j < lights.size(); j++) {
                if((j + 1 ) % i == 0) {
                    lights[j] = !lights[j];
                }
            }
        }
        int result = 0;
        for(int i = 0; i < lights.size(); i++) {
            if(lights[i] == true) {
                result++;
            }
        }
        return result;
    }
};