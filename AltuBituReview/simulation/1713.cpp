#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

typedef pair<int,int> ci;

struct Photo{
    int id;
    int cnt;
    int order;

    Photo(int i, int j, int k): id(i), cnt(j), order(k){}

    void updateCnt(int newCnt){
      this->cnt = newCnt;
    }

    bool operator<(const Photo& p) const{
      if(this->cnt != p.cnt){
        return this->cnt > p.cnt;
      }
      return this->order < p.order;
    }
};

int main(){
    int n,t,x;
    cin >> n >> t;
    map<int,int> cnt;
    vector<bool> isInFrame(101,false);
    priority_queue<Photo> frame;

    while(t--){
        cin >> x;
        cnt[x]++;

        if(isInFrame[x]){
          continue;
        }

        if(frame.size()>=n){
            auto curr = frame.top();
            frame.pop();
            while(curr.cnt != cnt[curr.id]){
              frame.push({curr.id,cnt[curr.id],curr.order});
              curr = frame.top();
              frame.pop();
            }
            cnt[curr.id] = 0;
            isInFrame[curr.id] = false;
        }

        frame.push({x,cnt[x],t});
        isInFrame[x] = true;
    }

    vector<int> ans;
  
    while(!frame.empty()){
      ans.push_back(frame.top().id);
      frame.pop();
    }

    sort(ans.begin(),ans.end());

    for(int i = 0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
}