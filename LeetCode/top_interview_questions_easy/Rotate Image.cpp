//input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
//output: [[7,4,1],[8,5,2],[9,6,3]]

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> copied;
        copied.assign(matrix.size(), vector<int>(matrix.size()));
        copy(matrix.begin(), matrix.end(), copied.begin());
        
        int s = matrix.size(); //avoid redundant function call
        
        for(int i = 0; i<s; i++){
            for(int j = 0; j<s; j++){
                //be careful to not use unnecessary variants
                matrix[j][s-1-i] = copied[i][j];
            }
        }
    }
};
