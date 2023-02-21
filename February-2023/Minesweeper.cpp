#include <iostream>
#include <vector>
using namespace std;
using vc = vector<char>;
using vvc = vector<vc >;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)

void solve(int n, int m, int c) {
    vvc minefield;
    string s;
    rep(i,0,n) {
        cin >> s;
        vc row(m);
        rep(i,0,m) row[i] = (s[i]=='*') ? '*' : '0';
        minefield.pb(row);
    }

    rep(i,0,n) {
        rep(j,0,m) {
            if(minefield[i][j] == '*') {
                //up
                if(i > 0) {
                    if(minefield[i-1][j] != '*') minefield[i-1][j] = (char)(minefield[i-1][j]+1);
                    //up-left
                    if(j > 0) {
                        if(minefield[i-1][j-1] != '*') minefield[i-1][j-1] = (char)(minefield[i-1][j-1]+1);
                    }
                    //up-right
                    if(j < m-1) {
                        if(minefield[i-1][j+1] != '*') minefield[i-1][j+1] = (char)(minefield[i-1][j+1]+1);
                    }
                }
                //down
                if(i < n-1) {
                    if(minefield[i+1][j] != '*') minefield[i+1][j] = (char)(minefield[i+1][j]+1);
                    //down-left
                    if(j > 0) {
                        if(minefield[i+1][j-1] != '*') minefield[i+1][j-1] = (char)(minefield[i+1][j-1]+1);
                    }
                    //down-right
                    if(j < m-1) {
                        if(minefield[i+1][j+1] != '*') minefield[i+1][j+1] = (char)(minefield[i+1][j+1]+1);
                    }
                }
                //left
                if(j > 0) {
                    if(minefield[i][j-1] != '*') minefield[i][j-1] = (char)(minefield[i][j-1]+1);
                }
                //right
                if(j < m-1) {
                    if(minefield[i][j+1] != '*') minefield[i][j+1] = (char)(minefield[i][j+1]+1);
                }

            }
        }
    }

    printf("Field #%d:\n", c);
    rep(i,0,n) {
        rep(j,0,m)
            cout << minefield[i][j];
        cout << endl;
    }
}

int main() {
    int n, m, c = 1; cin >> n >> m;
    while(1) {
        solve(n, m, c);
        cin >> n >> m;
        if(n+m == 0) break;
        cout << endl;
        c++;
    }
    return 0;
}