#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int points(string s, char b) {
    int p;
    if(s[0] == 'J') {
        (s[1] == b) ? p = 20 : p = 2;
    }
    if(s[0] == '9') {
        (s[1] == b) ? p = 14 : p = 0;
    }
    switch (s[0]) {
        case 'A':
            p = 11; 
            break;
        case 'K':
            p = 4; 
            break;
        case 'Q':
            p = 3; 
            break;
        case 'T':
            p = 10; 
            break;
        case '8':
            p = 0; 
            break;
        case '7':
            p = 0; 
            break;
    }
    return p;     
}

int main() {
    int n, p=0; char b; cin >> n >> b;
    string s;
    rep(i,0,n*4) {
        cin >> s;
        p += points(s, b);
    }
    cout << p << endl;
    return 0;
}