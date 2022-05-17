#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    string s;
    getline(cin, s);
    int half = s.length()/2;
    for(int i = 0; i < half/2; i++) {
        swap(s[i], s[half-i-1]);
        swap(s[half+i], s[s.length()-i-1]);
    }   
    cout << s << endl;
}

int main() {
    string t1;
    getline(cin, t1);
    int t = stoi(t1);
    while(t--) {
        solve();
    }
    return 0;
}