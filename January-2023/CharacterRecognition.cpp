#include <iostream>
#include <vector>
using namespace std;
using vs = vector<string>;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n; cin >> n;
    vs v(5);
    cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4];
    string s = "";
    rep(j,0,n) {
        int i = j*4;
        if(v[0].substr(i,3) == ".*." && v[1].substr(i,3) == ".*." && v[2].substr(i,3) == ".*." && 
        v[3].substr(i,3) == ".*." && v[4].substr(i,3) == ".*.") {
            s += "1";
        }
        if(v[0].substr(i,3) == "***" && v[1].substr(i,3) == "..*" && v[2].substr(i,3) == "***" && 
        v[3].substr(i,3) == "*.." && v[4].substr(i,3) == "***") {
            s += "2";
        }
        if(v[0].substr(i,3) == "***" && v[1].substr(i,3) == "..*" && v[2].substr(i,3) == "***" && 
        v[3].substr(i,3) == "..*" && v[4].substr(i,3) == "***") {
            s += "3";
        }
    }
    cout << s << endl;
    return 0;
}