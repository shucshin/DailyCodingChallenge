#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    string s; cin >> s;
    bool hiss = false;
    rep(i,1,s.length()) {
        if(s.substr(i-1,2) == "ss") hiss = true;
    }
    hiss ? printf("hiss\n") : printf("no hiss\n");
    return 0;
}