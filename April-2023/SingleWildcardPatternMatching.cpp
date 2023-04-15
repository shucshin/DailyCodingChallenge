#include <iostream>
#include <vector>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n, m; cin >> n >> m;
    string s, t; cin >> s >> t;
    if(s == t) {printf("YES\n"); return 0;}
    int i=s.length()-1, j=t.length()-1;
    while(s[i] == t[j]) {i--; j--;}
    s.erase(i+1,n-i-1); t.erase(j+1,m-j-1);
    

    int a = 0;
    while(s[a]==t[a]) {a++;}
    s.erase(0,a); t.erase(0,a);

    s=="*" || (s=="" && t=="") ? printf("YES\n") : printf("NO\n");
    return 0;
}
