#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;

    int minv = 0;
    int p = 0;
    int j = 0;

    for (int i = 0; i<lottos.size(); i++){
        if (!lottos[i]){
            p++;
            continue;
        }

        auto it = find(win_nums.begin(),win_nums.end(), lottos[i]);
        if (it != win_nums.end()){
            minv++;
        }
    }

    int maxv = minv+p;

    if(maxv < 2){
        answer.push_back(6);
        answer.push_back(6);
    }
    else if(minv < 2){
        answer.push_back(7-maxv);
        answer.push_back(6);
    }
    else{
        answer.push_back(7-maxv);
        answer.push_back(7-minv);
    }
    return answer;
}