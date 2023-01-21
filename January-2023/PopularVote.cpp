#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int t; cin >> t;
    rep(i,0,t) {
        int n, ni, max = -1, winner = 0, sum = 0;
        bool draw = false;
        cin >> n;
        rep(j,1,n+1) {
            cin >> ni;
            sum += ni;
            if(max == ni) {draw = true;}
            if(max < ni) {max = ni; winner = j; draw = false;}
        }
        draw ? printf("no winner\n") : (max <= sum/2 ? printf("minority winner %d\n", winner) : printf("majority winner %d\n", winner));
    }
    return 0;
}