#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef vector<int> vi;
typedef long long ll;

int main() {
    int n, p;
    cin >> n;
    vi vec;
    for(int i = 0; i < n; i++) {
        cin >> p;
        vec.push_back(p);
    }
    sort(vec.begin(), vec.end(), greater<int>());
    ll ans = 0;
    for(int i = 2; i < n; i+=3)
        ans += vec[i];
    cout << ans << endl;
    return 0;
}