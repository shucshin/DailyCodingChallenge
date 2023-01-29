#include <iostream>
using namespace std;

void reverse(string &s) {
    for(int i = 0; i < s.length()/2; i++) {
        char temp = s[i];
        s[i] = s[s.length()-i-1];
        s[s.length()-i-1] = temp;
    }
}

int main() {
    int n; cin >> n;
    string s = "";
    while(n > 2) {
        if((n-1)%2 == 0) {
            s += "A";
            n = (n-1)/2;
        }
        if((n-2)%2 == 0) {
            s += "B";
            n = (n-2)/2;
        }
    }
    if(n == 1) s += "A";
    if(n == 2) s += "B";
    reverse(s);
    cout << s << endl;
    return 0;
}