#include<iostream>
using namespace std;
using ll = long long;

int main() {
    ll n, c = 0;
    cin >> n;
    string s;
    for(ll i = 0; i < n; i++) {
        cin >> s;
        if(s.find("CD") == string::npos)
            c++;
    }
    cout << c << endl;
    return 0;
}