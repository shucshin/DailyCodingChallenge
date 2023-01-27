#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n; cin >> n; n-=7;
    string s = "ROYG";
    rep(i,0,n/4) s += "ROYG";
    n%=4;
    if(n==3) s += "ROY";
    if(n==2) s += "RO";
    if(n==1) s += "R";
    s += "BIV";
    cout << s << endl;
    return 0;
}