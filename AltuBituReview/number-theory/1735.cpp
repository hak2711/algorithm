#include <iostream>

using namespace std;

typedef long long ll;

int gcd(ll a, ll b){
    if(b == 0){
        return a;
    }
    if(b == 1){
        return b;
    }

    return gcd(b,a%b);
}

int main(){
    int head1, head2, bottom1, bottom2;
    ll newHead, newBottom, a, b;
    cin >> head1 >> bottom1;
    cin >> head2 >> bottom2;

    newHead = head1*bottom2+ head2*bottom1;
    newBottom = bottom1 * bottom2;

    newHead>newBottom?(a=newHead,b=newBottom):(a=newBottom,b=newHead);

    int g = gcd(a,b);
    cout << newHead/g << " " << newBottom/g;
}