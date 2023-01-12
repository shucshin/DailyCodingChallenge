#include <iostream>
using namespace std;
using ll = long long;
using ld = long double;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    string s, t;
    while(1) {
        getline(cin, s);
        getline(cin, t);
        if(s == "") break;
        int a=0, b=0;
        // Sum of each char num into a
        rep(i,0,s.length()) {
            if(!isalpha(s[i])) continue;
            a += (int)tolower(s[i])-96;
        }
        // Sum of each char num into b
        rep(i,0,t.length()) {
            if(!isalpha(t[i])) continue;
            b += (int)tolower(t[i])-96;
        }
        while(a > 9) {
            string x = to_string(a); a = 0;
            rep(i,0,x.length())
                a += (int)x[i]-'0';
        }
        while(b > 9) {
            string y = to_string(b); b = 0;
            rep(i,0,y.length()) 
                b += (int)y[i]-'0';
        }
        ld ans = (ld)min(a,b)*100.00/max(a,b);
        printf("%0.2Lf %%\n", ans);
    }
    return 0;
}