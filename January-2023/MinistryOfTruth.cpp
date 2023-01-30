#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;
    for(int i = 0; i < s.length()/2; i++) {
        s[s.length()-i-1] = s[i];
    }
    cout << s << endl;
    return 0;
}