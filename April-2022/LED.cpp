#include <iostream>
using namespace std;

void solve() {
	string s;
	int ans=0;
	cin >> s;
	for(int i=0; i < s.length(); i++) {
		switch(s[i]) {
			case '1':
				ans += 2;
				continue;
			case '2':
				ans += 5;
				continue;
			case '3':
				ans += 5;
				continue;
			case '4':
				ans += 4;
				continue;
			case '5':
				ans += 5;
				continue;
			case '6':
				ans += 6;
				continue;
			case '7':
				ans += 3;
				continue;
			case '8':
				ans += 7;
				continue;
			case '9':
				ans += 6;
				continue;
			case '0':
				ans += 6;
				continue;
		}
	}
	cout << ans << " leds\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) 
		solve();
	return 0;
}
