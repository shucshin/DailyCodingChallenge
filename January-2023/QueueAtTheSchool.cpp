#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n, t; cin >> n >> t;
    string s; cin >> s;
    rep(i,0,t) {
        rep(j,1,n) {
            if(s[j-1] == 'B' && s[j] == 'G') {
                s[j-1] = 'G';
                s[j] = 'B';
                j++;
            }
        }
    }
    cout << s << endl;
    return 0;
}