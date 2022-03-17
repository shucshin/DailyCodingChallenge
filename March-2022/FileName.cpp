#include <iostream>
using namespace std;
using ll = long long;

int main() {
	ll n;
	string s;
	cin >> n >> s;
	ll c=0, ans=0;
	for(ll i = 0; i < n; i++) {
		if(s[i] == 'x') {
			c++;
		}
		else {
			if(c < 3) {
				c=0;
				continue;
			}
			ans += (c-2);
			c=0;
		}
	}
	if(c >= 3)
		ans += (c-2);
	cout << ans << endl;
	return 0;
}
