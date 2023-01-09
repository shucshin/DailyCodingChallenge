#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n, x; cin >> n;
    rep(i,0,n) {
        cin >> x;
        (x%2==0) ? printf("%d is even\n", x) : printf("%d is odd\n", x);
    }
    return 0;
}