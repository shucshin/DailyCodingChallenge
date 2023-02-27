#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;
    int m = 0, c = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '0') {c++;}
        else {
            if(m < c) m = c;
            c = 0;
        }
    }
    int ans = (m+1)/2;
    //if(ans < 1) ans = 1;
    cout << ans << endl;
    return 0;
}