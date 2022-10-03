#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void subsetsUtil(vector<int>& v, vector<vector<int> >& subsets, vector<int>& subset, int i) {
    subsets.push_back(subset);
    for(int a = i; a < v.size(); a++) {
        subset.push_back(v[a]);
        subsetsUtil(v, subsets, subset, a+1);
        subset.pop_back();
    }
    return;
}

vector<vector<int> > subset(vector<int>& v) {
    vector<int> subset;
    vector<vector<int> > subsets;
    int i = 0;
    subsetsUtil(v, subsets, subset, i);
    return subsets;
}

void solve() {
    int n, p, pi;
    cin >> n >> p;
    vector<int> v;
    for(int i = 0; i < p; i++) {
        cin >> pi;
        v.push_back(pi);
    }
    sort(v.begin(), v.end());
    vector<vector<int> > subsets = subset(v);
    vector<int> sums;
    for(int i = 0; i < subsets.size(); i++) {
        int sum = 0;
        for(int j = 0; j < subsets[i].size(); j++) {
            sum += subsets[i][j];
        }
        sums.push_back(sum);
    }
    for(int i = 0; i < sums.size(); i++) {
        if(sums[i] == n) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}