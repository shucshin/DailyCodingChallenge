#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>
using namespace std;
using ll = long long;
using vl = vector<long long>;

bool prime[9832718];

int main() {
    ll n;
    cin >> n;
    // Criba de Eratostenes
    ll m = 9832717;
    memset(prime, true, sizeof(prime));
    prime[0] = false, prime[1] = false;
    for(ll p = 2; p*p <= m; p++) {
        if(prime[p] == true) {
            for(ll i = p*p; i <= m; i+=p) {
                prime[i] = false;
            }
        }
    }
    // Vector para solo guardar primos
    vl vec;
    for(ll i = 2; i <= m; i++) {
        if(prime[i] == true) {
            vec.push_back(i);
        }
    }
    cout << vec[n-1] << endl;
    return 0;
}