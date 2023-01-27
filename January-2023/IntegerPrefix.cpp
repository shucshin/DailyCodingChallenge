#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    string s, ans = ""; cin >> s;
    rep(i,0,s.length()) {
        if(isdigit(s[i])) ans += s[i];
        else break;
    }
    !ans.length() ? printf("-1\n") : printf("%s\n", ans.c_str());
    return 0;
}