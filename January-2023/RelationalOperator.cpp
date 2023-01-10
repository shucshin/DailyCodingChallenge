#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int t; cin >> t;
    int a, b;
    rep(i,0,t) {
        cin >> a >> b;
        if(a > b) cout << ">\n";
        else if(a < b) cout << "<\n";
        else cout << "=\n";
    }
    return 0;
}