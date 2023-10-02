#include <iostream>
#include <vector>

using namespace std;

int main(){
    string s, answer = "";
    bool isValid = true;
    int middleidx = -1;
    cin >> s;

    vector<int> cnt(26);

    for(char c: s){
      cnt[c-'A']++;
    }

    for(int i = 0; i<26; i++){
        if(cnt[i]%2 == 1 && middleidx == -1){
            middleidx = i;
        }
        else if(cnt[i]%2 == 1){
            isValid = false;
            break;
        }
    }

    if(!isValid){
        cout << "I'm Sorry Hansoo";
        return 0;
    }

    for(int i = 0; i<26; i++){
        for(int j = 0; j<(cnt[i]/2); j++){
            answer += ('A'+i);
        }
    }

    int middlelength = answer.size();
    string st(answer.crbegin(), answer.crend());
    answer += st;

    if(s.size()%2==1){
          answer.insert(answer.begin()+middlelength,'A'+middleidx);
    }

    cout << answer;
}