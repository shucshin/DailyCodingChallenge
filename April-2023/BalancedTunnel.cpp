#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)
/**
 * 2 4 1 0 3 [a]
 * 3 2 1 4 0 [b]
 * 
 * [4,2,1,0,3]
 * 
 * [1 3 2 4 0]
*/


int main() {
    int n; cin >> n;
    vi a(n), b(n), c(n), res(n);
    rep(i,0,n) {cin >> a[i]; a[i]--;}
    rep(i,0,n) {cin >> b[i]; b[i]--;}
    rep(i,0,n) {
        c[b[i]] = i; // turn of that index that goes out
    }
    rep(i,0,n) {
        res[i] = c[a[i]]; // order of that car that goes out
    }
    int fined = 0, x=-1;
    rep(i,0,n) {
        if(res[i] > x) {
            x = res[i];
        }
        else {
            fined++;
        }
    }
    cout << fined << endl;
    return 0;
}