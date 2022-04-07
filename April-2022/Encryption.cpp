#include <iostream>
#include <string>
using namespace std;
using ll = long long;

void solve() {
	string s;
	getline(cin, s);
	for(ll i=0; i < s.length(); i++) {
		if((int(s[i]) >= 65 && int(s[i]) <= 90) || (int(s[i]) >= 97 && int(s[i]) <= 122))
			s[i] += 3;
	}
	char temp;
	for(ll i=0; i < s.length()/2; i++) {
		temp = s[i];
		s[i] = s[s.length()-i-1];
		s[s.length()-i-1] = temp;
	}
	for(ll i=s.length()/2; i < s.length(); i++)
		s[i] -=1;
	cout << s << endl;
}

int main() {
	ll t;
	cin >> t;
	string a;
	getline(cin, a);
	while(t--) {
		solve();
	}
	return 0;
}
