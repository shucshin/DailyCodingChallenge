#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    string s; cin >> s;
    bool h=0,e=0,l1=0,l2=0,o=0;
    bool l=1;
    rep(i,0,s.length()) {
        if(s[i]=='h') h=1;
        if(s[i]=='e' && h) e = 1;
        if(s[i]=='l' && e && l) {l1 = 1; l = 0; continue;}
        if(s[i]=='l' && l1) l2 = 1;
        if(s[i]=='o' && l2) o = 1;
    }
    (h && e && l1 && l2 && o) ? printf("YES\n") : printf("NO\n");
    return 0;
}