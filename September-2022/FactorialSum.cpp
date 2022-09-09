#include <iostream>
using namespace std;
typedef long long ll;

ll factorial(ll n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return (ll)n * factorial(n-1);
}

int main() {
    ll m, n;
    while(cin >> m >> n) {
        cout << factorial(m) + factorial(n) << endl;
    }
    return 0;
}