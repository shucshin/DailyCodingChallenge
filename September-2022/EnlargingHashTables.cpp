#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>
using namespace std;
typedef long long ll;



void solve(ll n, bool prime[]) {    
    // Checa si n es número primo
    bool nPrime = prime[n];
    // Variable con número mínimo mayor a 2n
    ll n2 = n*2 + 1;
    // Iterar Criba de Eratóstenes hasta que n2 sea primo (que el elemento sea true)
    while(!prime[n2]) {
        n2++;
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
    ll m = sqrt(pow(2, 30));
    bool prime[m];
    memset(prime, true, sizeof(prime));
    prime[0] = false, prime[1] = false;
    for(ll p = 2; p*p <= m; p++) {
        if(prime[p] == true) {
            for(ll i = p*p; i <= m; i+=p) {
                prime[i] = false;
            }
        }
    }
    ll n;
    while(cin >> n) {
        if(n == 0)
            break;
        solve(n, prime);
    }
    return 0;
}