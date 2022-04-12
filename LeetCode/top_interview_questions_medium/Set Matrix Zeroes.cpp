//input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
//output: [[1,0,1],[0,0,0],[1,0,1]]

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //to remove redundance, use set rather than vector
        set<int> rows;
        set<int> cols;
        
        for(int i = 0; i<matrix.size(); i++){
            for(int j = 0; j<matrix[i].size(); j++){
                //collect location of zero elements
                if(!matrix[i][j]){
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        
        for(int row : rows){
            for(int j = 0; j<matrix[row].size(); j++){
                matrix[row][j] = 0;
            }
        }
        
        for(int col : cols){
            for(int i = 0; i<matrix.size(); i++){
                matrix[i][col] = 0;
            }
        }
    }
};



//2 slower
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> zeros;
        
        for(int i = 0; i<matrix.size(); i++){
            for(int j = 0; j<matrix[i].size(); j++){
                if(!matrix[i][j]){
                    zeros.push_back({i,j});
                }
            }
        }
        
        for(int i = 0; i<zeros.size(); i++){
            int row = zeros[i].first;
            int col = zeros[i].second;
            
            for(int j = 0; j<matrix.size(); j++){
                for(int k = 0; k<matrix[j].size(); k++){
                    if((j == row || k == col) && matrix[j][k]){
                        matrix[j][k] = 0;
                    }
                }
            }
        }
    }
};
