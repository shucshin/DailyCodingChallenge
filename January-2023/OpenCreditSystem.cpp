#include <iostream>
#include <climits>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a, max = 0, diff = INT_MIN;
        cin >> max;
        rep(i,1,n) {
            cin >> a;
            if(max - a > diff) diff = max - a;
            if(a > max) max = a;
        }
        cout << diff << endl;
    }
    return 0;
}