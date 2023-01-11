#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n, a, c=1;
    while(cin >> n) {
        if(!n) break;
        int p=0, m=0;
        rep(i,0,n) {
            cin >> a;
            a > 0 ? p++ : m++;
        }
        printf("Case %d: %d\n", c, p-m);
        c++;
    }
    return 0;
}