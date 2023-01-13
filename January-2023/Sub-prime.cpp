#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int b, n;
    while(cin >> b >> n) {
        vi monetaryReserve(b);
        bool flag = true;
        if(!b && !n) break;
        // b :: # of banks
        rep(i,0,b) {
            // how much money has each bank
            cin >> monetaryReserve[i];
        }
        // n :: debentures printed by banks
        rep(i,0,n) {
            // d :: debtor bank -
            // c :: creditor bank +
            // v :: debenture value 
            int d, c, v; cin >> d >> c >> v;
            monetaryReserve[d-1] -= v;
            monetaryReserve[c-1] += v;
        }

        rep(i,0,b) {
            if(monetaryReserve[i] < 0) flag = false;
        }
        flag ? printf("S\n") : printf("N\n");
    }
    return 0;
}