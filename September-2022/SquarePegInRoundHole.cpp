#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef vector<double> vd;
typedef double d;

int main() {
    int n, m, k;
    d a;
    cin >> n >> m >> k;
    vd nn, mk;
    for(int i=0; i<n; i++) {
        cin >> a;
        nn.push_back(a);
    }
    for(int i=0; i<m; i++) {
        cin >> a;
        mk.push_back(a);
    }
    for(int i=0; i<k; i++) {
        cin >> a;
        a = sqrt(2*(a/2)*(a/2));
        mk.push_back(a);
    }
    sort(nn.begin(), nn.end());
    sort(mk.begin(), mk.end());
    int ans = 0;
    // Ver 1
    /*for(int i = 0; i < n; i++) {
        if(mk[0] < nn[i]) {
            ans++;
            mk.erase(mk.begin());
        }
    }*/
    // Ver 2
    for(int i = 0; i < m+k; i++) {
        for(int j = 0; j < n; j++) {
            if(mk[i] < nn[j]) {
                ans++;
                nn[j] = -1;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}