#include <iostream>
#include <vector>
using namespace std;
using vs = vector<string>;
#define rep(i,a,b) for(int i = a; i < b; i++)

char changeAxis(char axis, char s) {
    if(axis == 'x') return s;
    if((axis == 'y' && s == 'y') || (axis == 'z' && s == 'z')) return 'x';
    return axis;
}

char changeSign(char axis, char sign, char tempA, char tempS) {
    if(axis == tempA) {
        if(sign == '+' && tempS == '+') return '-';
        if(sign == '-' && tempS == '+') return '+';
    }
    if(axis == 'x') {
        if(sign == '+' && tempS == '-') return '-';
        if(sign == '-' && tempS == '-') return '+';
    }
    return sign;
}

int main() {
    int l;
    while(cin >> l) {
        if(!l) return 0;
        char axis = 'x'; char sign = '+';
        l--;
        string s;
        rep(i,0,l) {
            cin >> s;
            if(s == "No") continue;
            sign = changeSign(axis, sign, s[1], s[0]);
            axis = changeAxis(axis, s[1]);
        }
        printf("%c%c\n",sign,axis);
    }
    return 0;
}