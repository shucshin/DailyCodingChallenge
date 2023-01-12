#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n, d; cin >> n;
    vi v(n-1,0);
    rep(i,2,n+1) {
        cin >> d;
        v[d] = i;
    }
    cout << "1 ";
    rep(i,0,n-1) {
        if(i == n-2) {
            cout << v[i] << endl; break;
        }
        cout << v[i] << " ";
    }
    return 0;
}