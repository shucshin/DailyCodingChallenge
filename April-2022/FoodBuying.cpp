#include <iostream>
using namespace std;
using ll = long long;

void solve() {
	ll s, ans=0;
	cin >> s;
	if(s < 10) {
		cout << s << endl;
		return;
	}
	while(s > 0) {
		ans += (s/10)*10;
		s = (s/10) + (s%10);
		if(s < 10) {
			ans += s;
			s = 0;
		}
	}
	cout << ans << endl;
}

int main() {
	ll t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
