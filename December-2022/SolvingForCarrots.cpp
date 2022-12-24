#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n, p; cin >> n >> p;
    string s;
    cin.ignore();
    rep(i,0,n) {
        getline(cin, s);
    }
    cout << p << endl;
    return 0;
}