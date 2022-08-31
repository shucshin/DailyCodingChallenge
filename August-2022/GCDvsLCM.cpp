#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vi;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

void solve() {
    int n;
    cin >> n;
    int o = n/4;
    int p = n%4;
    vi v;
    for(int i = 0; i < 4; i++) {
        v.push_back(o);
    }
    for(int i = 0; i < p; i++) {
        v[i] += 1;
    }
    int a = v[0], b = v[1], c = v[2], d = v[3];
    


}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}