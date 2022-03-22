#include <iostream>
using namespace std;
using ll = long long;

ll voidAbsorption(ll x) {
	return x/2 + 10;
}

void solve() {
	ll x,n,m;
	cin >> x >> n >> m;
	if(x <= m*10) {
		cout << "YES\n";
		return;
	}
	for(int i=0; i < n; i++) {
		x = voidAbsorption(x);
		if(x <= m*10) {
			cout << "YES\n";
			return;
		}
	}
	if(x <= m*10)
		cout << "YES\n";
	else
		cout << "NO\n";
}

int main() {
	ll t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
