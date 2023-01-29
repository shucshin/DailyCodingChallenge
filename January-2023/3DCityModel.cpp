#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
using vvi = vector<vector<int> >;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m; cin >> n >> m;
    int surfaceArea = 0;
    vvi v(n,vi(m));
    string s;
    rep(i,0,n) {
        cin >> s;
        rep(j,0,m) {
            v[i][j] = (int)s[j]-'0';
            if(v[i][j]) surfaceArea += 2;
        }
    }        

    rep(i,0,n) {
        rep(j,0,m) {
            if(i == 0) surfaceArea += v[i][j];
            if(i == n-1) surfaceArea += v[i][j];
            if(j == 0) surfaceArea += v[i][j];
            if(j == m-1) surfaceArea += v[i][j];
            // up
            if(i > 0 && v[i][j] > v[i-1][j]) {
                surfaceArea += (v[i][j] - v[i-1][j]);
            }
            // down
            if(i < n-1 && v[i][j] > v[i+1][j]) {
                surfaceArea += (v[i][j] - v[i+1][j]);
            }
            // left
            if(j > 0 && v[i][j] > v[i][j-1]) {
                surfaceArea += (v[i][j] - v[i][j-1]);
            }
            if(j < m-1 && v[i][j] > v[i][j+1]) {
                surfaceArea += (v[i][j] - v[i][j+1]);
            }
        }
    }
    cout << surfaceArea << endl;
    return 0;
}