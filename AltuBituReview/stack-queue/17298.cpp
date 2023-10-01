#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    int n, x;
    cin >> n;

    stack<int> nums;
    stack<int> prev;
    vector<int> outputs;

    for(int i = 0; i<n; i++){
        cin >> x;
        nums.push(x);
        outputs.push_back(-1);
    }

    prev.push(nums.top());

    for(int i = n-1; i>= 0; i--){
        while(!prev.empty() && prev.top() <= nums.top()){
            prev.pop();
        }

        if(!prev.empty() && prev.top() > nums.top()){
            outputs[i] = prev.top();
        }
        
        prev.push(nums.top());
        nums.pop();
    }

    for(int i = 0; i<n; i++){
        cout << outputs[i] << " ";
    }
}