#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
typedef vector<string> vs;

void solve(int n, int l, int c) {
    int pages = 0;
    string s;
    getline(cin, s);
    stringstream ss(s);
    vs vec;
    while(ss >> s) {
        vec.push_back(s);
    }
    int cc = 0, ll = 0;
    for(int i = 0; i < vec.size(); i++) {
        cc += vec[i].size();
        if(c < cc) {
            ll++;
            cc = vec[i].size();
        }  
        cc++;
        if(l == ll) {
            pages++;
            ll = 0;
        }
    }
    if(cc > 0 || ll > 0)
        pages++;
    cout << pages << endl;
}

int main() {
    string s;
    int n, l, c;
    while(getline(cin, s)) {
        if(s == "") break;
        stringstream ss(s);
        ss >> n >> l >> c;
        solve(n, l, c);
    }
    return 0;
}
