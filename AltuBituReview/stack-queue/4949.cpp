#include <iostream>
#include <stack>
#include <map>

using namespace std;

int main(){
    string input;
    while(cin >> input){
        stack<char> st;
        map<char, char> pairs = {{'(',')'},{'[',']'}};

        bool isBalanced = true;

        if(input == "."){
            break;
        }

        for(char c : input){
            if(c == '(' || c == '['){
                st.push(c);
            }
            else if(c == ')' || c == ']'){
                if(st.empty() || st.top() != pairs[c]){
                    isBalanced = false;
                }else{
                    st.pop();
                }
            }
        }

        if(isBalanced){
            cout << "yes\n";
        }else{
            cout << "no\n";
        }
    }
}