#include <iostream>
#include <string>
#include <regex>
using namespace std;

void solve(string s) {
    bool caps = true;
    for(auto &c : s) {
        if(isalpha(c)) {
            if(caps) {
                c = toupper(c);
                caps = false;
            }
            else {
                c = tolower(c);
                caps = true;
            }
        }
    }
    cout << s << endl;
}

int main() {
    string s;
    while(getline(cin, s)) {
    if(s == "")
        break;
        solve(s);
    }
}