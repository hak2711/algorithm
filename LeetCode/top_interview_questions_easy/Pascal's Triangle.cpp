//input: numRows = 5
//output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> results;
        
        vector<int> firstRow;
        firstRow.push_back(1);
        results.push_back(firstRow);
        
        for(int i = 1; i<numRows; i++){
            vector<int> row;
            row.push_back(1);
            for(int j = 1; j < results[i-1].size(); j++){
                row.push_back(results[i-1][j-1]+results[i-1][j]);
            }
            row.push_back(1);
            results.push_back(row);
        }
        
        return results;
    }
};
