//input: board = [["5","3",".",".","7",".",".",".","."],["6",".",".","1","9","5",".",".","."],[".","9","8",".",".",".",".","6","."],["8",".",".",".","6",".",".",".","3"],["4",".",".","8",".","3",".",".","1"],["7",".",".",".","2",".",".",".","6"],[".","6",".",".",".",".","2","8","."],[".",".",".","4","1","9",".",".","5"],[".",".",".",".","8",".",".","7","9"]]
//output: true

#define MAX 9

class Solution {
public:
    static bool compare(pair<int,int> a, pair<int,int> b){
        return a.second < b.second;
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<pair<int,int>> nums[MAX];
      
        //collect place information for each numbers
        for(int i = 0; i<board.size(); i++){
            for(int j = 0; j<board[i].size(); j++){
                if(board[i][j] !='.'){
                    int num = board[i][j]-'0';
                    nums[num-1].push_back(make_pair(i,j));
                }
            }
        }

        //detect the invalid formations based on row
        for(auto num : nums){
            for(int i = 1; i<num.size(); i++){
                auto pre = num[i-1];
                auto nxt = num[i];
                
                if((pre.first == nxt.first) || ((pre.first/3 == nxt.first/3) && (pre.second/3 == nxt.second/3))){
                    return false;
                }
            }
        }
        
        //sort by columns
        for(int i = 0; i<MAX; i++){
            sort(nums[i].begin(),nums[i].end(),compare);
        }
        
        //detect the invalid formations based on column
        for(auto num : nums){
            for(int i = 1; i<num.size(); i++){
                auto pre = num[i-1];
                auto nxt = num[i];
                
                if((pre.second == nxt.second) || ((pre.first/3 == nxt.first/3) && (pre.second/3 == nxt.second/3))){
                    return false;
                }
            }
        }
        
        return true;
    }
};


//2
#define MAX 9

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        //check row for every elements
        for(int i = 0; i<board.size(); i++){
            bool checkRow[MAX] = {false};
            
            for(int j = 0; j<board[i].size(); j++){
                if(board[i][j] !='.'){
                    if(checkRow[board[i][j]-'1']){
                        return false;
                    }
                    else
                        checkRow[board[i][j]-'1'] = true;
                }
            }
        }
        
        //check col for every elements
        for(int i = 0; i<board.size(); i++){
            bool checkCol[MAX] = {false};
            
            for(int j = 0; j<board[i].size(); j++){
                if(board[j][i] !='.'){
                    if(checkCol[board[j][i]-'1']){
                        return false;
                    }
                    else
                        checkCol[board[j][i]-'1'] = true;
                }
            }
        }
        
        //check box for every elements
        for(int i = 0; i<board.size(); i++){
            bool checkBox[MAX] = {false};
            
            for(int j = 0; j<board[i].size(); j++){
                int x = (i/3)*3+j/3;
                int y = (i%3)*3+j%3;
                if(board[x][y] !='.'){
                    if(checkBox[board[x][y]-'1']){
                        return false;
                    }
                    else
                        checkBox[board[x][y]-'1'] = true;
                }
            }
        }
        
        return true;
    }
};
