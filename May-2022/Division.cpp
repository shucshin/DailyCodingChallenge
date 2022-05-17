#include <iostream>
using namespace std;
using ll = long long;

void solve() {
	ll n;
	cin >> n;
	if(n < 1400)
		cout << "Division 4\n";
	else if(n < 1600)
		cout << "Division 3\n";
	else if(n < 1900)
		cout << "Division 2\n";
	else
		cout << "Division 1\n";
}

int main() {
	ll t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
