#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n, p; cin >> n;
    vi v(n);
    rep(i,0,n) {
        cin >> p;
        v[p-1] = i+1; 
    }
    rep(i,0,n) {
        cout << v[i] << " ";
    } cout << endl;
    return 0;
}