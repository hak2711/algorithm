#include <string>
#include <cstring>
#include <vector>
#include <boost/algorithm/string.hpp>

using namespace std;

string solution(string new_id) {

    //1단계
    boost::algorithm::to_lower(new_id);

    //2단계
    int size = new_id.size();
    for(int i = size-1; i>=0; i--){
        char x = new_id[i];
        if(isalpha(x) || isdigit(x) || x == '-' || x == '_' || x == '.') continue;
        else new_id.erase(i,1);
    }

    //3단계
    size = new_id.size();
    for(int i = size-1; i>0; i--){
        if(new_id[i-1] == '.' && new_id[i] == '.') new_id.erase(i,1);
    }

    //4단계
    if(new_id.front() == '.') new_id.erase(0,1);
    if(new_id.back() == '.') new_id.erase(new_id.size()-1,1);

    //5,67단계
    size = new_id.size();

    if(size >= 16) {
        new_id.erase(15);
        if(new_id.back() == '.') new_id.erase(new_id.size()-1,1);
    }

    while(size <= 2){
        if(size == 0) new_id += "a";

        char last = new_id.back();
        new_id += last;
        size = new_id.size();
    }

    return new_id;
}