#include <iostream>
#include <algorithm>
#define MAX 129

using namespace std;

int graph[MAX][MAX];
int d_y[8] = {0,1,-1,0,-1,1,-1,1};
int d_x[8] = {1,0,0,-1,-1,-1,1,1};
int w, h, sum;

void dfs(int x, int y){
  if(graph[x][y] == 1){
    graph[x][y] = 0;
    
    for(int i = 0; i<8; i++){
      int nx = x + d_x[i];
      int ny = y + d_y[i];
      if((nx >= 0) && (nx <h) && (ny >= 0) && (ny < w))
        dfs(nx,ny);
    }
  }
  return;
}


int main(void){

  while(true){
    sum = 0;
    cin >> w >> h;
    if(w==0 && h==0)
      break;
    
    for(int i = 0; i<h; i++){
      for(int j = 0; j<w; j++){
        cin >> graph[i][j];
      }
    }

    for(int i = 0; i<h; i++){
      for(int j = 0; j<w; j++){
        if(graph[i][j] == 1){
          sum++;
          dfs(i,j);
        }
      }
    }
    cout << sum << "\n";
  }
  
}