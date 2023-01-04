#include <iostream>
using namespace std;

int main() {
    int l, r; cin >> l >> r;
    if(!l && !r) cout << "Not a moose\n";
    else if(l == r) cout << "Even " << l+r << endl;
    else cout << "Odd " << max(l,r)*2 << endl;
    return 0;
}