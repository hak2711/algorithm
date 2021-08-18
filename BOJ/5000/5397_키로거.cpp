#include <iostream>
#include <list>

using namespace std;

int main(void){
  list<char> pw;
  int t;
  cin >> t;

  for(int i = 0; i<t; i++){
    string s;
    cin >> s;
    pw.clear();
    auto cursor = pw.end();

    for(char c : s){
      if(c == '<'){
        if(cursor != pw.begin()){
          cursor--;
        }
      }
      else if(c == '>'){
        if(cursor != pw.end()){
          cursor++;
        }
      }
      else if(c == '-'){
        if(cursor != pw.begin()){
          pw.erase(--cursor);
        }
      }
      else{
        pw.insert(cursor,c);
      }
    }

    for(auto c : pw){
      cout << c;
    }
    cout << "\n";
  }
}