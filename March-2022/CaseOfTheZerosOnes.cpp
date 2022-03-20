#include <iostream>
using namespace std;
using ll = long long;

int main() {
	ll n, ans=0;
	string s;
	cin >> n >> s;
	for(ll i = 0; i < n; i++) {
		if(s[i] == '0')
			ans++;
		else
			ans--;
	}
	cout << abs(ans) << endl;
	return 0;
}
