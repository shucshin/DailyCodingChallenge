#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;

bool prime[32768];

void solve(ll n, bool prime[], vl vec) {    
    // Checa si n es número primo
    bool nPrime = true;
    for(int i = 0; i < vec.size(); i++) {
        if(n == vec[i]) {
            nPrime = true;
            break;
        }
        if(n%vec[i] == 0) {
            nPrime = false;
            break;
        }
    }
        
    // Variable con número mínimo mayor a 2n
    ll n2 = n*2;
    bool n2Prime = false;
    while(!n2Prime) {
        n2++;
        n2Prime = true;
        for(int i = 0; i < vec.size(); i++) {
            if(sqrt(n2) < vec[i]) {
                break;
            }
            if(n2%vec[i] == 0) {
                n2Prime = false;
                break;
            }
        }
    }
    
    // Si n es primo solo imprimir n2
    if(nPrime)
        cout << n2 << endl;
    // Sino, imprimir siguiente número primo mayor a 2n e imprimir que n no es primo
    else
        printf("%lld (%lld is not prime)\n", n2, n);
}

int main() {
    // Criba de Eratóstenes
    ll m = 32768;
    memset(prime, true, sizeof(prime));
    prime[0] = false, prime[1] = false;
    for(ll p = 2; p*p <= m; p++) {
        if(prime[p] == true) {
            for(ll i = p*p; i <= m; i+=p) {
                prime[i] = false;
            }
        }
    }
    vl vec;
    for(ll i = 2; i <= m; i++) {
        if(prime[i] == true) {
            vec.push_back(i);
        }
    }

    ll n;
    while(cin >> n) {
        if(n == 0)
            break;
        solve(n, prime, vec);
    }
    return 0;
}