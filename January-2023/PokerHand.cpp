#include <iostream>
#include <map>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    string s;
    map<char, int> m;
    rep(i,0,5) {
        cin >> s;
        m[s[0]]++;
    }
    int strength = 0;
    for(auto a : m) {
        strength = max(strength, a.second);
    }
    cout << strength << endl;
    return 0;
}