#include <iostream>
using namespace std;
using ll = long long;

void solve() {
	string s;
	cin >> s;
	ll zeros=0, ones=0;
	for(ll i=0; i < s.length(); i++) {
		if(s[i] == '0')
			zeros++;
		else
			ones++;
	}
	ll m = min(zeros,ones);
	if(m%2 == 1)
		cout << "DA\n";
	else
		cout << "NET\n";
}

int main() {
	ll t;
	cin >> t;
	while(t--) {
		solve();
	}
}
