#include <iostream>
#include <vector>
using namespace std;
using vc = vector<char>;
using vvc = vector<vector<char> >;
#define pb(a) push_back(a)
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve() {
    vvc board;
    string s;
    rep(i,0,8) {
        vc row;
        cin >> s;
        rep(j,0,8) row.pb(s[j]);
        board.pb(row);
    } 

    rep(i,0,8) {
        rep(j,0,6) {
            if(board[i][j] == '#' && board[i][j+2] == '#') {
                cout << i+2 << " " << j+2 << endl;
                return;
            }
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}