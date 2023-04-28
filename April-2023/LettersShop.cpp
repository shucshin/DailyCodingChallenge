#include <iostream>
#include <vector>
#include <map>
using namespace std;
using vi = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define pb push_back

int main() {
    int n, m; 
    string s, t;
    cin >> n >> s >> m;
    map<char,vi> letters;
    rep(i,0,n) {
        letters[s[i]].pb(i+1);
    }

    while(m--) {
        cin >> t;
        vi alpha(26,0);
        rep(i,0,t.length()) {
            alpha[t[i]-'a']++;
        }
        int ans = 0;
        for(int i = 0; i < 26; i++) {
            if(alpha[i]) {
                ans = max(ans,letters[i+'a'][alpha[i]-1]);
            }
        } 
        cout << ans << endl;
        fill(all(alpha), 0);
    }
    return 0;
}