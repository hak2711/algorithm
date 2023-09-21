//Input: image = [[0,0,0],[0,0,0]], sr = 0, sc = 0, newColor = 2
//Output: [[2,2,2],[2,2,2]]

//make all elements that have same color as the start to have the newColor
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        //if the start color is same with the new one, we do not have to change it.
        if(image[sr][sc] == newColor)
            return image;
        
        queue<pair<int,int>> floods;
        int dx[4] = {1,-1,0,0};
        int dy[4] = {0,0,1,-1};
        
        int start = image[sr][sc];
        floods.push({sr,sc});
        
        while(!floods.empty()){
            int x = floods.front().first;
            int y = floods.front().second;
            floods.pop();
            image[x][y] = newColor;
            
            for(int i = 0; i<4; i++){
                int nx = x + dx[i];
                int ny = y + dy[i];
                
                if(nx >= 0 && nx < image.size() && ny >= 0 && ny < image[0].size()){
                    if(image[nx][ny]==start)
                        floods.push({nx,ny});
                }
            }
        }
        
        return image;
    }
};
