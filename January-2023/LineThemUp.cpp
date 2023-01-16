#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n; cin >> n;
    bool increase = false, decrease = false;
    string s, t; cin >> s;
    rep(i,1,n) {
        cin >> t;
        if(s < t) increase = true;
        if(s > t) decrease = true;
        s = t;
    }
    if(increase && !decrease) printf("INCREASING\n");
    else if(!increase && decrease) printf("DECREASING\n");
    else printf("NEITHER\n");
    return 0;
}