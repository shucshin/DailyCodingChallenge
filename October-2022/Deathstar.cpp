#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long; // %lld
using ld = long double; // %0.5lf

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, a;
    cin >> n;
    vector<vector<int> > matrix;
    for(int i = 0; i < n; i++) {
        vector<int> v;
        for(int j = 0; j < n; j++) {
            cin >> a;
            v.push_back(a);
        }
        matrix.push_back(v);
    }
    vector<int> ans;
    ans.resize(n, 0);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) continue;
            ans[i] |= matrix[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}