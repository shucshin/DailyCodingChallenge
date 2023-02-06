#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

// cout << '\n' << flush; == cout << endl;

int main() {
    string s;
    int l = 1, r = 1e6;
    while(l != r) {
        int m = (l+r+1)/2;
        cout << m << endl;
        cin >> s;
        s == ">=" ? l=m : r=m-1;
    }
    cout << "! " << l << endl;
    return 0;
}