// 11614
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int t; cin >> t;
    ll n;
    while(t--) {
        cin >> n;
        cout << ll((-1+sqrt(1+8*n))/2) << endl;
    }
    return 0;
}