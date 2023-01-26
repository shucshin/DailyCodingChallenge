#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n, total=0, a; cin >> n;
    rep(i,0,n) {
        cin >> a;
        total += a;
    }
    total > 0 ? printf(":)\n") : (total < 0 ? printf(":(\n") : printf(":|\n"));
    return 0;
}