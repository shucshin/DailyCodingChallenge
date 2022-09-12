#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll x, f;
    cin >> x >> f;
    f /= 10;
    ll d = x - f;
    if(d > 0)
        cout << "$" << d << endl;
    else
        cout << "$0\n";
    return 0;
}