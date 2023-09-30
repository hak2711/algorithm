#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int before_weight, before_input, before_basic, t, days, diet_input, action, diet_w1, diet_w2, diet_basic, temp;
    bool is_danger_diet = false;

    cin >> before_weight >> before_input >> t;
    cin >> days >> diet_input >> action;

    before_basic = before_input;
    diet_basic = before_basic;
    diet_w1 = before_weight;
    diet_w2 = before_weight;

    //일일 기초대사량 변화 고려x
    //예상 체중, 일일 기초 대사량
    for(int i = 0; i<days; i++){
        diet_w1 += (diet_input - (before_basic + action));
        temp = diet_input - (diet_basic + action);
        diet_w2 += temp;

        if(abs(temp) > t){
            diet_basic += floor(temp/2.0);
        }

      
    }

    if(diet_w1 <= 0){
        cout << "Danger Diet" << "\n";
    }else{
        cout << diet_w1 << " " << before_basic << "\n";
    }

    if(diet_w2 <= 0 || diet_basic <= 0){
      cout << "Danger Diet" << "\n";
    }else{
        cout << diet_w2 << " " << diet_basic << " ";
        if((before_input - diet_basic)>0){
            cout << "YOYO";
        }else{
            cout << "NO";
        }
    }
}