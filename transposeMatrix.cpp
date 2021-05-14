class Solution {
public:
    // for matrices that are square (have same width and height)
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        for(int i = 0; i < matrix[0].size(); i++) {
            for(int y = i+1; y < matrix.size(); y++) {
                if(i != y) {
                    int temp = matrix[i][y];
                    matrix[i][y] = matrix[y][i];
                    matrix[y][i] = temp;
                }
            }
        }
        return matrix;
    }
};