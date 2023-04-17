#include <iostream>
#include <map>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    int n, q; cin >> n >> q;
    string s,t;
    map<string,int> m;
    rep(i,0,n) {
        cin >> s;
        t = "";
        rep(i,0,s.length()) {
            if(s[i]=='a' || s[i]=='b' || s[i]=='c') t += "2";
            if(s[i]=='d' || s[i]=='e' || s[i]=='f') t += "3";
            if(s[i]=='g' || s[i]=='h' || s[i]=='i') t += "4";
            if(s[i]=='j' || s[i]=='k' || s[i]=='l') t += "5";
            if(s[i]=='m' || s[i]=='n' || s[i]=='o') t += "6";
            if(s[i]=='p' || s[i]=='q' || s[i]=='r' || s[i]=='s') t += "7";
            if(s[i]=='t' || s[i]=='u' || s[i]=='v') t += "8";
            if(s[i]=='w' || s[i]=='x' || s[i]=='y' || s[i]=='z') t += "9";
        }
        m[t]++;
    }
    rep(i,0,q) {
        cin >> s;
        cout << m[s] << endl;
    }
    return 0;
}